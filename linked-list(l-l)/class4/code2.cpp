#include <iostream>
#include <vector>
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
node* reverseDLL2(node* head) {
    if (head == nullptr) return nullptr;

    node* current = head;
    node* temp = nullptr;

    while (current != nullptr) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;

        current = current->prev;
    }

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

    head = reverseDLL2(head);

    cout << "Reversed using optimal approach: ";
    print(head);

    return 0;
}