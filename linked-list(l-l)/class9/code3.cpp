 //reverse the linked list (single linked list (2nd optimal approach))
 //using the recursion methos 
 
#include <bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int data) {
        val = data;
        next = nullptr;
    }
};
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // Base case
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        // Recursively reverse the remaining list
        ListNode* newHead = reverseList(head->next);
        // Reverse the current link
        head->next->next = head;
        // Break the old link
        head->next = nullptr;
        return newHead;
    }
};
// Create linked list
ListNode* createList(vector<int>& arr) {
    if (arr.empty()) return nullptr;

    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;

    for (int i = 1; i < (int)arr.size(); i++) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }

    return head;
}
// Print linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val;

        if (head->next != nullptr) {
            cout << " -> ";
        }
        head = head->next;
    }
    cout << " -> NULL\n";
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    ListNode* head = createList(arr);
    cout << "Original List:\n";
    printList(head);
    Solution sol;
    head = sol.reverseList(head);
    cout << "Reversed List:\n";
    printList(head);
    return 0;
}
