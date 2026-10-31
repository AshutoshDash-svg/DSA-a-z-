//check whether a linkedlist was palindrome or not(brutforce approach)
//using the stack concept
#include <bits/stdc++.h>
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
bool checkpalindrome(node* head){
    stack<int> st;
    node* temp=head;
    while(temp!=NULL){
        st.push(temp->data);
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL){
        if(temp->data!=st.top()){
            return false;
        }
        st.pop();
        temp=temp->next;
    }
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

    if(checkpalindrome(head)){
        cout<<"palindrome";
    }else{
        cout<<"not palindrome";
    }
    return 0;
}