//sortlist the 0 and 1 and 2 (optimal approach)
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
node* sortlist(node* head){
    if(head==nullptr || head->next==nullptr){
        return head;
    }
    node* zerodumy=new node(-1);
    node* onedumy=new node(-1);
    node* twodumy=new node(-1);

    node* zero=zerodumy;
    node* one=onedumy;
    node* two=twodumy;
    
    node* temp=head;

    while(temp!=nullptr){
        if(temp->data==0){
            zero->next=temp;
            zero=zero->next;
        }else if(temp->data==1){
            one->next=temp;
            one=one->next;
        }else{
            two->next=temp;
            two=two->next;
        }
        temp=temp->next;
    }
    zero->next=(onedumy->next)?(onedumy->next):(twodumy->next);
    one->next=twodumy->next;
    two->next=NULL;
    node* newhead=zerodumy->next;
    delete zerodumy;
    delete onedumy;
    delete twodumy;
    return newhead;
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
    vector<int> values = {1, 2, 0, 1, 2, 0, 1};

    node* head = buildlist(values);

    cout << "Original Linked List: ";
    printlist(head);

    head = sortlist(head);

    cout << "Sorted Linked List: ";
    printlist(head);

    return 0;
}