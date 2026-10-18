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
node* insertionofalinkedlist(node* head,int val){
    node* temp= new node{val,head};
    return temp;
}
node* insertionattailofll(node* head,int val){
    if(head==NULL){
        return new node{val};
    }
    node* temp=head;
    while(temp->next != NULL){
        temp=temp->next;
        }
        node* newnode=new node{val};
        temp->next=newnode;
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
    node* originalhead=(head);
    cout << "Original Linked List: ";
    print(head);

    head=insertionofalinkedlist(head,70);
    cout<<"after insertion of the new element: ";
    print(head);

    head=insertionattailofll(head,100);
    cout<<"after insertion at the tail: ";
    print(head);
}