#include<iostream>
#include<vector>
using namespace std;
struct node{
    public:
    int data;
    node*next;


    // public:
    // node(int data1,node*next1){
    //     data=data1;
    //     next=next1;
    // }
};
int lengthofll(node*head){
    int cnt=0;
    node*temp=head;
    while(temp!=nullptr){
        cnt++;
        temp=temp->next;
    }
    return cnt;

}

int checkifpresent(node*head,int val){
    node*temp=head;
    while(temp!=nullptr){
        if(temp->data == val){
            return 1;
        }
        temp=temp->next;
    }
    return 0;
}

int main(){
    vector<int> arr={2,3,5,4};
    node*head=new node{arr[0],nullptr};
    node*current=head;
    for(int i =1;i<arr.size();i++){
        current->next=new node{arr[i],nullptr};
        current=current->next;
    }
    node*temp=head;
    while(temp !=nullptr){
        cout<<temp->data<<" "<<endl;
        temp=temp->next;
    }
    cout<<"lenghtofll is: "<<lengthofll(head)<<endl;
    cout<<checkifpresent(head,15);
        return 0;
}