#include <iostream>

// Node structure for the linked list
struct Node {
    int data;
    Node* next;
};

// Function to insert a new node at the beginning of the linked list
void insertAtBeginning(Node*& head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = head;
    head = newNode;
}

// Function to insert a new node at the end of the linked list
void insertAtEnd(Node*& head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to delete a node with a given key
void deleteNode(Node*& head, int key) {
    if (head == nullptr) return;

    Node* temp = head;

    if (temp->data == key) {
        head = temp->next;
        delete temp;
        return;
    }

    Node* prev = nullptr;
    while (temp != nullptr && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == nullptr) return;

    prev->next = temp->next;
    delete temp;
}

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        std::cout << temp->data << " -> ";
        temp = temp->next;
    }
    std::cout << "nullptr" << std::endl;
}

int main() {
    Node* head = nullptr;

    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtBeginning(head, 0);

    std::cout << "Linked List after insertions: ";
    printList(head);

    deleteNode(head, 2);
    std::cout << "Linked List after deleting 2: ";
    printList(head);

    return 0;
}
