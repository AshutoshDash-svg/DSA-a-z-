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


node* insertionattheposition(node* head,int el,int k){
    if(head==NULL){
        if(k==1){
            return new node{el,nullptr};
        }else{
            return head;
        }
    }
    if(k==1){
        return new node{el,head};
    }
    int cnt=0;
    node* temp=head;
    while(temp!=NULL){
        cnt++;
        if (cnt==(k-1)){
            node* newnode=new node{el,temp->next};
            temp->next=newnode;
            break;
            }
            temp=temp->next;
        }
        return head;
    }


node* insertionabeforthevalue(node* head,int el,int val){
    if(head==NULL){
            return NULL;
        }
    if(head->data==val){
        return new node{el,head};
    }
    node* temp=head;
    while(temp->next!=NULL){
        if (temp->next->data==val){
            node* newnode=new node{el,temp->next};
            temp->next=newnode;
            break;
            }
            temp=temp->next;
        }
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

    head=insertionattheposition(head,20,3);
    cout<<"after insertion of the element at the given position: ";
    print(head);

    head=insertionabeforthevalue(head,40,20);
    cout<<"after insertion of the element in before the value given: ";
    print(head);
}