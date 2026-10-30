//sortlist the 0 and 1 and 2 (brutforce approach)
#include <bits/stdc++.h>
using namespace std; 
class Node {
public:
    int data;
    Node* next; 
    // Constructor to create a linked list node.
    Node(int value) {
        data = value;
        next = nullptr;
    }
}; 
class Solution {
public:
    // Function to sort the linked list with frequency counting.
    Node* sortList(Node* head) {
        // Return the same head for empty or single-node lists.
        if (head == nullptr || head->next == nullptr) {
            return head;
        } 
        // Store counts for values 0, 1, and 2.
        int count[3] = {0, 0, 0};
        Node* current = head; 
        // Count occurrences of 0, 1, and 2.
        while (current != nullptr) {
            count[current->data]++;
            current = current->next;
        } 
        current = head;
        int value = 0; 
        // Rewrite node values in sorted order.
        while (current != nullptr) {
            // Skip values whose frequency is already exhausted.
            while (value < 3 && count[value] == 0) {
                value++;
            } 
            // Place the current sorted value into the node.
            current->data = value;

            // Consume one occurrence of the placed value.
            count[value]--;
            current = current->next;
        }
 
        return head;
    }
}; 
// Function to build a linked list from an array.
Node* buildList(vector<int>& arr) {
    // Return null for an empty input array.
    if (arr.empty()) {
        return nullptr;
    } 
    // Create the head node from the first value.
    Node* head = new Node(arr[0]);
    Node* tail = head; 
    // Append the remaining values one by one.
    for (int index = 1; index < (int)arr.size(); index++) {
        tail->next = new Node(arr[index]);
        tail = tail->next;
    } 
    return head;
}
// Function to print linked list values.
void printList(Node* head) {
    Node* current = head;
    // Print every node value in sequence.
    while (current != nullptr) {
        cout << current->data;
        if (current->next != nullptr) {
            cout << " ";
        }
        current = current->next;
    }
    cout << "\n";
} 
// Driver code.
int main() {
    vector<int> arr = {1, 2, 0, 1, 2, 0, 1};
    Node* head = buildList(arr); 
    Solution sol;
    head = sol.sortList(head); 
    printList(head);
    return 0;
}