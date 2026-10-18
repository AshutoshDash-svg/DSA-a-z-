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
}