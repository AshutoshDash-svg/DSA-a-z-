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
    cout<<endl;
}

// dellete of the head of a double linked list
node* deleteheadofdll(node* head){
    if(head==NULL||head->next==NULL){
        return NULL;
    }
    node* prev=head;
    head=head->next;

    head->prev=nullptr;
    prev->next=nullptr;
    delete prev;
    return head;

}

//delete the tail of a double linked list
node* deletetail(node* head){
    if(head==NULL||head->next==NULL){
        return NULL;
    }
    node* tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    node* newtail=tail->prev;
    newtail->next=nullptr;
    tail->prev=nullptr;
    delete tail;
    return head;
}


//dllete the kth element of the double linked list
node* remoovekthelement(node*head, int k){
    if(head==NULL){
        return NULL;
    }
    int cnt=0;
    node* temp=head;
    while(temp!=NULL){
        cnt++;
        if(cnt==k){
            break;
        }
        temp=temp->next;
    }
    node* back=temp->prev;
    node* front=temp->next;
    if(back==NULL && front==NULL){
        return NULL;
    }
    else if(back==NULL){
        return deleteheadofdll(head);
    }
    else if(front==NULL){
        return deletetail(head);
    }
    back->next=front;
    front->prev=back;
    temp->next=NULL;
    temp->prev=NULL;
    delete temp;
    return head;
}
// Create a separate copy of Linked List

node* copyList(node* head) {
    if (head == nullptr) {
        return nullptr;
    }

    node* newHead = new node(head->data);
    node* current = newHead;
    head = head->next;

    while (head != nullptr) {
        node* temp = new node(head->data);

        current->next = temp;
        temp->prev = current;

        current = temp;
        head = head->next;
    }

    return newHead;
}


int main() {
    vector<int> arr = {12, 5, 8, 7};

    node* head = convertarr2dll(arr);
    cout << "Original DLL: ";
    print(head);      // 12 5 8 7


    // Head deletion ke liye separate copy
    node* headCopy = copyList(head);
    headCopy = deleteheadofdll(headCopy);
    cout << "After deleting head: ";
    print(headCopy);  // 5 8 7

    // Tail deletion ke liye original se fresh copy
    node* tailCopy = copyList(head);
    tailCopy = deletetail(tailCopy);
    cout << "After deleting tail: ";
    print(tailCopy);  // 12 5 8
    
    //delete the kth element from the dll
    node* newcopy=copyList(head);
    newcopy=remoovekthelement(newcopy,3);
    cout<<"after the deletion of the kth element ";
    print(newcopy);


    return 0;
}