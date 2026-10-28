//reverse of a double linked list(brutforce approach)
//here the time complexity was O(2n) so that it the brutforce approach and we amke it the time complexity of the O(n)
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
struct node {
    int data;
    node* next;
    node* prev;

    node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};
node* convertarr2dll(vector<int>& arr) {
    if (arr.empty()) return nullptr;
    node* head = new node(arr[0]);
    node* back = head;
    for (int i = 1; i < arr.size(); i++) {
        node* temp = new node(arr[i]);
        temp->prev = back;
        back->next = temp;
        back = temp;
    }
    return head;
}
void print(node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
// void reverseDLL(node* head) {
//     stack<int> st;
//     node* temp = head;
//     // Step 1: Push all values into stack
//     while (temp != nullptr) {
//         st.push(temp->data);
//         temp = temp->next;
//     }
//     // Step 2: Pop values back into DLL
//     temp = head;
//     while (temp != nullptr) {
//         temp->data = st.top();
//         st.pop();
//         temp = temp->next;
//     }
// }


//reverse of a double linked list(optimal approach)
node* reverseDLL2(node* head) {
    if (head == nullptr) {
        return nullptr;
    }

    node* current = head;
    node* temp = nullptr;

    while (current != nullptr) {
        // Swap next and prev pointers
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;

        // Move to the next node in the ORIGINAL DLL
        current = current->prev;
    }

    // temp points to the old prev of the last processed node.
    // After swapping, this is the new head.
    if (temp != nullptr) {
        head = temp->prev;
    }

    return head;
}
int main() {
    vector<int> arr = {12, 5, 8, 7};
    node* head = convertarr2dll(arr);
    cout << "Original DLL: ";
    print(head);
    // reverseDLL(head);
    // cout << "Reversed DLL: ";
    // print(head);
    

    
    
    head=reverseDLL2(head);
    cout<<"reverse using the optimal approach: ";
    print(head);
    return 0;


}


