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
node* removeshead(node* head){
    if(head == NULL){
        return head;
    }
        node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }
node* removetail(node* head){
    if(head==NULL || head->next ==NULL){
        return NULL;
    }
    node* temp=head;
       while(temp->next->next !=NULL){
        temp=temp->next;
    }
    free(temp->next);
    temp->next=nullptr;
    return head;
    }

node* removekthpositionelement(node* head,int k){
    if(head==NULL){
        return head;
    }
    if(k==1){
        node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    int cnt=0;
    node* temp=head;
    node* prev=NULL;
    while(temp!=NULL){
        cnt++;
        if(cnt==k){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

node* removeelement(node* head,int el){
    if(head==NULL){
        return head;
    }
    if(head->data==el){
        node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    node* temp=head;
    node* prev=NULL;
    while(temp!=NULL){
        if(temp->data==el){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}
// Create a separate copy of Linked List
node* copyList(node* head) {
    if (head == nullptr) {
        return nullptr;
    }

    node* newHead = new node{head->data, nullptr};
    node* current = newHead;
    head = head->next;

    while (head != nullptr) {
        current->next = new node{head->data, nullptr};
        current = current->next;
        head = head->next;
    }

    return newHead;
}
int main(){
    vector<int> arr={2,4,6,8,10};
    node* head=new node{arr[0],NULL};
    node * current=head;
    for(int i=1;i<arr.size();i++){
        current->next = new node{arr[i], NULL};
        current = current->next;
    }
    node* originalhead=copyList(head);
    cout << "Original Linked List: ";
    print(head);

    head = removeshead(head);

    cout << "After removing head: ";
    print(head);

    head=removetail(head);
    cout<<"after deleting the tail of the linked list: ";
    print(head);

    originalhead=removekthpositionelement(originalhead,3);
    cout<<"after removeing the kth eliment: ";
    print(originalhead);


    originalhead=removeelement(originalhead,6);
    cout<<"after remove the element: ";
    print(originalhead);
    return 0; 
}