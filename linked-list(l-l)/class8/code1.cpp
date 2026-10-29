//remove the nth node from the end(optimal approach)
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
node* removenthfronlast(node* head,int k){
    node* fast=head;
    node* slow=head;
    for(int i=0;i<k;i++){
        fast=fast->next;
    }
    if(fast==NULL){
        return head->next;
     }
     while(fast->next!=NULL){
        fast=fast->next;
        slow=slow->next;
     }

     node* dellnode=slow->next;
     slow->next=slow->next->next;
     delete dellnode;
     return head;
}

node* buildlist(const vector<int>& values) {
    node* dummy = new node(-1);
    node* tail = dummy;
    for (int value : values) {
        tail->next = new node(value);
        tail = tail->next;
    }
    node* head = dummy->next;
    delete dummy;
    return head;
}
void printlist(node* head) {
    while (head != nullptr) {
        cout << head->data;
        if (head->next != nullptr) {
            cout << " -> ";
        }
        head = head->next;
    }
    cout << " -> NULL" << endl;
}
int main() {
    vector<int> values = {1,2,3,4,5,6,7,8};
    node* head = buildlist(values);
    cout << "Original Linked List: ";
    printlist(head);
    head = removenthfronlast(head,3);
    cout << "Sorted Linked List: ";
    printlist(head);
    return 0;
}
