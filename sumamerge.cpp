#include <iostream>
using namespace std;

// Definition for singly-linked list node.
struct Node {
    int data;
    Node* next;
};

// Function to create a new node
Node* newNode(int key) {
    Node* temp = new Node;
    temp->data = key;
    temp->next = nullptr;
    return temp;
}

// Function to merge two sorted linked lists
Node* merge(Node* h1, Node* h2) {
    // If one of the lists is empty, return the other list
    if (!h1) return h2;
    if (!h2) return h1;

    // Start with the linked list whose head data is the least
    if (h1->data < h2->data) {
        h1->next = merge(h1->next, h2);
        return h1;
    } else {
        h2->next = merge(h1, h2->next);
        return h2;
    }
}

// Utility function to print the linked list
void printList(Node* node) {
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
}

int main() {
    // Create two sorted linked lists
    Node* head1 = newNode(1);
    head1->next = newNode(3);
    head1->next->next = newNode(5);

    Node* head2 = newNode(2);
    head2->next = newNode(4);
    head2->next->next = newNode(6);

    // Merge the two linked lists
    Node* mergedHead = merge(head1, head2);

    // Print the merged linked list
    printList(mergedHead);

    return 0;
}
