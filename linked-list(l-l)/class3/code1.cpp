//double linked list
#include<iostream>
#include<vector>
using namespace std;
struct node{
    public:
    int data;
    node*next;
    node*prev;
    public:
    node(int data1,node*next1,node*prev1){
        data=data1;
        next=next1;
        prev=prev1;
    }
    public:
    node(int data1){
        data=data1;
        next=nullptr;
        prev=nullptr;
    }
};
node* convertarr2dll(vector<int> &arr){
    node* head=new node(arr[0]);
    node* back=head;
    for(int i=1;i<arr.size();i++){
        node* temp=new node(arr[i],nullptr,back);
        back->next=temp;
        back=temp;
    }
    return head;
}
void print(node* head){
    while(head !=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    vector<int> arr={12,5,8,7};
    node* head=convertarr2dll(arr);
    print(head);
    return 0;
}