//finding the sum of the two given linked list(in single linked list)
#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
// Add two numbers stored in reverse order
Node* addTwoNumbers(Node* num1, Node* num2) {
    Node* dummyHead = new Node(-1);
    Node* curr = dummyHead;
    Node* temp1 = num1;
    Node* temp2 = num2;
    int carry = 0;
    while (temp1 != nullptr || temp2 != nullptr) {
        int sum = carry;
        if (temp1 != nullptr) {
            sum += temp1->data;
        }
        if (temp2 != nullptr) {
            sum += temp2->data;
        }
        Node* newNode = new Node(sum % 10);
        carry = sum / 10;
        curr->next = newNode;
        curr = curr->next;
        if (temp1 != nullptr) {
            temp1 = temp1->next;
        }
        if (temp2 != nullptr) {
            temp2 = temp2->next;
        }
    }
    // If carry remains, create one more node
    if (carry != 0) {
        Node* newNode = new Node(carry);
        curr->next = newNode;
    }
    // Skip the dummy node
    return dummyHead->next;
}
// Create a linked list from an array
Node* createList(int arr[], int n) {
    if (n == 0) {
        return nullptr;
    }
    Node* head = new Node(arr[0]);
    Node* curr = head;
    for (int i = 1; i < n; i++) {
        curr->next = new Node(arr[i]);
        curr = curr->next;
    }
    return head;
}
// Print linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data;

        if (temp->next != nullptr) {
            cout << " -> ";
        }
        temp = temp->next;
    }
    cout << " -> NULL" << endl;
}
int main() {
    // 342 = 2 -> 4 -> 3
    int arr1[] = {2, 4, 3};
    // 465 = 5 -> 6 -> 4
    int arr2[] = {5, 6, 4};
    Node* num1 = createList(arr1, 3);
    Node* num2 = createList(arr2, 3);
    cout << "First number: ";
    printList(num1);
    cout << "Second number: ";
    printList(num2);
    Node* result = addTwoNumbers(num1, num2);
    cout << "Result: ";
    printList(result);
    return 0;
}

