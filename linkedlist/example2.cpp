#include <iostream>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* current = head;
        
        while (current != NULL) {
            ListNode* next_node = current->next;
            current->next = prev;
            prev = current;
            current = next_node;
        }
        
        return prev;
    }
};

// Helper function to print the linked list
void printLinkedList(ListNode* head) {
    ListNode* current = head;
    while (current != NULL) {
        std::cout << current->val << " -> ";
        current = current->next;
    }
    std::cout << "NULL" << std::endl;
}

int main() {
    // Creating a linked list: 1 -> 2 -> 3 -> 4 -> 5 -> NULL
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    // Printing the original linked list
    std::cout << "Original Linked List:" << std::endl;
    printLinkedList(head);

    // Reversing the linked list
    Solution solution;
    ListNode* reversedHead = solution.reverseList(head);

    // Printing the reversed linked list
    std::cout << "Reversed Linked List:" << std::endl;
    printLinkedList(reversedHead);

    return 0;
}
