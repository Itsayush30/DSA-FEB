#include <iostream>

// Node structure for the linked list
struct Node {
    int data;
    Node* next;
    
    Node(int val) : data(val), next(nullptr) {}
};

// Function to insert a new node at the beginning of the linked list
void insertAtBeginning(Node** head, int val) {
    Node* newNode = new Node(val);
    newNode->next = *head;
    *head = newNode;
}

// Function to display the linked list
void displayList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

// Function to delete the entire linked list to prevent memory leaks
void deleteList(Node** head) {
    Node* current = *head;
    Node* next;
    while (current != nullptr) {
        next = current->next;
        delete current;
        current = next;
    }
    *head = nullptr;
}

int main() {
    Node* head = nullptr; // Pointer to the head of the linked list

    // Insert some elements into the linked list
    insertAtBeginning(&head, 5);
    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 15);
    
    // Display the linked list
    std::cout << "Linked List: ";
    displayList(head);
    
    // Delete the linked list to free memory
    deleteList(&head);
    
    return 0;
}
