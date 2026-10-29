//segrigate the even and the odd value of the linked list and arragenge the even values to first and the odd values are after the even values
//(brutforce approach)
//Example 1
// Input: head = [1, 2, 3, 4, 5, 6]

// Output: [2, 4, 6, 1, 3, 5]

// Explanation: Even-valued nodes keep original even-group order, and odd-valued nodes keep original odd-group order.

// Example 2
// Input: head = [7, 5, 3]

// Output: [7, 5, 3]

// Explanation: All nodes are odd, so original order remains unchanged.

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
    if(head==nullptr){
        return head;
    }
    vector<int> evenvalues;
    vector<int> oddvalues;
    node* current=head;
    while(current!=NULL){
        if(current->data %2==0){
            evenvalues.push_back(current->data);
        }else{
            oddvalues.push_back(current->data);
        }
        current=current->next;
    }
    current=head;
    for(int value:evenvalues){
        current->data=value;
        current=current->next;
    }
    for(int value:oddvalues){
        current->data=value;
        current=current->next;
    }
    return head;
}
node* buildlist(const vector<int>& values){
    node* dumy=new node(0);
    node* tail=dumy;
    for(int value:values){
        tail->next=new node(value);
        tail=tail->next;
    }
    node* head=dumy->next;
    delete dumy;
    return head;
}
void* printlist(node* head){
    while(head!=nullptr){
        cout<<head->data;
    if(head->next!=nullptr){
        cout<<" ";
    }
    head=head->next;
}
    cout<<endl;
}
int main() {
    vector<int> values = {1, 2, 3, 4, 5, 6};
    node* head = buildlist(values);
    cout << "Original Linked List: ";
    printlist(head);
    head = segrigate(head);
    cout << "After Segregation: ";
    printlist(head);
    return 0;
}