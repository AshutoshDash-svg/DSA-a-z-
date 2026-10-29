//this is the optimal approach of the sgrigating of the odd and even value in a single linke list
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
node* segrigate(node* head){
    if(head==nullptr||head->next==nullptr){
        return head;
    }
    node* evendumy=new node(0);
    node* odddumy=new node(0);
    node* eventail=evendumy;
    node* oddtail=odddumy;
    node* curent=head;

while(curent!=nullptr){
    node* front=curent->next;
    curent->next=nullptr;
    if(curent->data %2==0){
        eventail->next=curent;
        eventail=curent;
    }else{
        oddtail->next=curent;
        oddtail=curent;
    }
    curent=front;
  }
  eventail->next=odddumy->next;
  node* newhead;
  if(evendumy->next!=nullptr){
    newhead=evendumy->next;
  }else{
    newhead=odddumy->next;
  }
  delete evendumy;
  delete odddumy;
  return newhead;
}
node* buildList(const vector<int>& values) {
    node* dummy = new node(0);
    node* tail = dummy;
    for (int value : values) {
        tail->next = new node(value);
        tail = tail->next;
    }
    node* head = dummy->next;
    delete dummy;
    return head;
}
void printList(node* head) {
    while (head != nullptr) {
        cout << head->data;
        if (head->next != nullptr) {
            cout << " -> ";
        }
        head = head->next;
    }
    cout << " -> NULL\n";
}
// Memory free karne ka function
void deleteList(node* head) {
    while (head != nullptr) {
        node* temp = head;
        head = head->next;
        delete temp;
    }
}
int main() {
    vector<int> values = {5, 2, 7, 4, 1, 6};
    node* head = buildList(values);
    cout << "Original Linked List:\n";
    printList(head);

    head=segrigate(head);
    cout << "\nAfter Even-Odd Segregation:\n";
    printList(head);

    deleteList(head);
    return 0;
}