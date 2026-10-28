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


//insert element before the head of a double linked list
node* insertbeforhead(node* head,int val){
    node* newhead=new node(val,head,nullptr);
    head->prev=newhead;
    return newhead;
}

//inser element before the tail of the linked list
node* insertbefortail(node* head,int val){
    if(head->next==NULL){
        return insertbeforhead(head,val);
    }
    node* tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    node* back=tail->prev;
    node* newnode=new node(val,tail,back);
    back->next=newnode;
    tail->prev=newnode;
    return head;
}


//inser the lement befor the kth position
node* insertbeforkthelement(node* head,int k,int val){
    if(k <= 0) {
        return head;
    }

    if(head == nullptr) {
        if(k == 1) {
            return new node(val);
        }
        cout << "The given position is not there";
        return head;
    }

    if(k==1){
        return insertbeforhead(head,val);
    }
    node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        if(count==k){
        break;
    }
    temp=temp->next;
    }
    if(temp == NULL) {
    cout << "The given position is not there\n";
    return head;
}
    node* back=temp->prev;
    node* newnode=new node(val,temp,back);
    back->next=newnode;
    temp->prev=newnode;
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


    //insert the element before the head of a dll
    node* newcopy=copyList(head);
    newcopy=insertbeforhead(newcopy,4);
    cout<<"after insertion of the element before the head of a  dll:  ";
    print(newcopy);
    //insert the new element before the tail of the dll
    node* newcopy1=copyList(head);
    newcopy1=insertbefortail(newcopy1,9);
    cout<<"after insertion the element befor the tail of the dll: ";
    print(newcopy1);
    //insert the new element befor the kth position
    node* newcopy2=copyList(head);
    newcopy2=insertbeforkthelement(newcopy2,8,10);
    cout<<"after insert the elemnt before the kth position of the linked list: ";
    print(newcopy2);
}