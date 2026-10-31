//check whether a linkedlist is palindrome or not(optimal approach(using the reverse of the linked list))
#include<iostream>
#include<vector>
using namespace std;
struct node{
    int data;
    node* next;
    node(int val){
        data=val;
        next=nullptr;
    }
};
node* reverseList(node* head) {
        node* prev = nullptr;
        node* current = head;
        // Traverse nodes and reverse one link per step.
        while (current != nullptr) {
            node* front = current->next;
            current->next = prev;
            prev = current;
            current = front;
        }
        return prev;
    }
bool ispalindrome(node* head){
    if(head==NULL|| head->next==NULL){
        return head;
    }
    node* slow=head;
    node* fast=head;
    while(fast->next!=NULL && fast->next->next!=NULL ){
        slow=slow->next;
        fast=fast->next->next;
    }
    node* newhead=reverseList(slow->next);
    node* first=head;
    node* second=newhead;
    while(second!=NULL){
        if(first->data!=second->data){
            reverseList(newhead);
            return false;
        }
        first=first->next;
        second=second->next;
    }
    reverseList(newhead);
    return true;
}
node* buildlist(vector<int>& values){
    if(values.empty()){
        return nullptr;
    }
    node* head=new node(values[0]);
    node* tail=head;
    for(int i=1;i<values.size();i++){
        tail->next=new node(values[i]);
        tail=tail->next;
    }
    return head;
}
node* printlist(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main(){
    vector<int> values={1,2,3,2,1};
    node* head=buildlist(values);
    cout<<"original list is: ";
    printlist(head);

    if(ispalindrome(head)){
        cout<<"palindrome";
    }else{
        cout<<"not palindrome";
    }
    return 0;
}