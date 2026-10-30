//remove the nth node from the end(brutforce approach)
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int data;
    ListNode* next;
    ListNode(int value) {
        data = value;
        next = nullptr;
    }
};

class Solution {
public:
    // Function to remove nth node from back using length counting.
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length = 0;
        ListNode* current = head;
        
        // Count total nodes.
        while (current != nullptr) {
            length++;
            current = current->next;
        }
        
        ListNode dummy(0);
        dummy.next = head;
        ListNode* previous = &dummy;
        int steps = length - n;
        
        // Move to node before deletion target.
        for (int index = 0; index < steps; index++) {
            previous = previous->next;
        }
        
        // Bypass deletion target.
        previous->next = previous->next->next;
        return dummy.next;
    }
};

// Function to create linked list from array.
ListNode* createList(vector<int>& arr) {
    ListNode dummy(0);
    ListNode* tail = &dummy;
    for (int value : arr) {
        tail->next = new ListNode(value);
        tail = tail->next;
    }
    return dummy.next;
}

// Function to print linked list values.
void printList(ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
        cout << current->data;
        if (current->next != nullptr) cout << " ";
        current = current->next;
    }
}

// Driver code.
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = 2;
    ListNode* head = createList(arr);
    Solution sol;
    head = sol.removeNthFromEnd(head, n);
    printList(head);
    return 0;
}