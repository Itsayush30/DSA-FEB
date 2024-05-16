#include <iostream>

// Define a linked list node
struct Node {
    int data;
    Node* next;
};

// Function to insert a new node at the beginning of the linked list
void push(Node** head_ref, int new_data) {
    // Allocate memory for the new node
    Node* new_node = new Node();
    
    // Set the data of the new node
    new_node->data = new_data;
    
    // Set the next of the new node to the current head
    new_node->next = *head_ref;
    
    // Set the head to point to the new node
    *head_ref = new_node;
}

// Function to find the middle element of the linked list
Node* findMiddle(Node* head) {
    if (head == nullptr) {
        return nullptr;
    }
    
    Node* slow_ptr = head;
    Node* fast_ptr = head;
    
    // Move slow_ptr one step at a time and fast_ptr two steps at a time
    while (fast_ptr != nullptr && fast_ptr->next != nullptr) {
        slow_ptr = slow_ptr->next;
        fast_ptr = fast_ptr->next->next;
    }
    
    // Return the node pointed to by slow_ptr
    return slow_ptr;
}

int main() {
    Node* head = nullptr;
    
    // Insert elements into the linked list
    push(&head, 6);
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);
    
    // Find the middle element of the linked list
    Node* middle = findMiddle(head);
    
    // Print the value of the middle element
    if (middle != nullptr) {
        std::cout << "Middle element of the linked list is: " << middle->data << std::endl;
    } else {
        std::cout << "The linked list is empty." << std::endl;
    }
    
    return 0;
}
