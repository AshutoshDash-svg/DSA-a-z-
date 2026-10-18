#include<iostream>
#include<vector>
using namespace std;
struct node{
    int data;
    node*next;
};
void print(node*head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout <<endl;
}
node* removeshead(node* head){
    if(head == NULL){
        return head;
    }
        node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }
node* removetail(node* head){
    if(head==NULL || head->next ==NULL){
        return NULL;
    }
    node* temp=head;
       while(temp->next->next !=NULL){
        temp=temp->next;
    }
    free(temp->next);
    temp->next=nullptr;
    return head;
    }
int main(){
    vector<int> arr={2,4,6,8,10};
    node* head=new node{arr[0],NULL};
    node * current=head;
    for(int i=1;i<arr.size();i++){
        current->next = new node{arr[i], NULL};
        current = current->next;
    }
    cout << "Original Linked List: ";
    print(head);

    head = removeshead(head);

    cout << "After removing head: ";
    print(head);

    head=removetail(head);
    cout<<"after deleting the tail of the linked list: ";
    print(head);

    return 0; 
}