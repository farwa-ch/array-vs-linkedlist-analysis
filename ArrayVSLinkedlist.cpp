#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Insert at end of linked list
int insertLinkedList(Node*& head, int value) {
    int steps = 0;
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return 1;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
        steps++;
    }

    temp->next = newNode;
    return steps + 1;
}

int main() {
    const int SIZE = 20;
    int arr[SIZE];
    int arraySteps = 0;

    // Array insertion
    for (int i = 0; i < SIZE; i++) {
        arr[i] = i;
        arraySteps++;
    }

    // Linked List insertion
    Node* head = NULL;
    int listSteps = 0;
    for (int i = 0; i < SIZE; i++) {
        listSteps += insertLinkedList(head, i);
    }

    cout << "Array Insertion Steps: " << arraySteps << endl;
    cout << "Linked List Insertion Steps: " << listSteps << endl;

    return 0;
}
