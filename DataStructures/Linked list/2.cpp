// inserting a node in a linked list
#include <bits/stdc++.h>

#define endl "\n"
using namespace std;

class Node {
public:
    int data;
    Node *next;
};

void push(Node **ref, int value) {
    Node *new_node = new Node();
    new_node->data = value;
    new_node->next = *ref;
    *ref = new_node;
}

void insertAfter(Node *prev_node, int value) {
    if (prev_node == NULL) {
        cout << "The previous node should not point to null" << endl;
        return;
    }
    Node *new_node = new Node();
    new_node->data = value;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void append(Node **ref, int value) {
    Node *new_node = new Node();
    Node *last = *ref;
    new_node->data = value;
    new_node->next = NULL; // this node is going to be at the last of the linked list so will be pointing to NULL
    // if the linked list is empty the new_node will become head
    if (*ref == NULL) {
        *ref = new_node;
        return;
    }
    // else traversing to the last node
    while (last->next != NULL)
        last = last->next;
    //changing the next of last node
    last->next = new_node;
    return;
}

void printList(Node *node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}

void add_at_last(Node *&head, int d) {
    Node *temp = head;
    if (temp == NULL) {
        head = new Node();
        head->data = d;
        head->next = NULL;
        return;
    }
    while (temp->next != NULL) {
        temp = temp->next;
    }
    Node *tail = new Node();
    tail->next = NULL;
    tail->data = d;
    temp->next = tail;
}

void add_at_front(Node *&head, int d) {
    if (head == NULL) {
        head = new Node();
        head->data = d;
        head->next = NULL;
        return;
    }
    Node *front = new Node();
    front->data = d;
    front->next = head;
    head = front;
    return;
}

int main() {
    Node *head = NULL;
    push(&head, 6);
    append(&head, 8);
    insertAfter(head->next, 7);
    push(&head, 5);
    add_at_last(head, 16);
    add_at_front(head,56);
    add_at_front(head, 23);
    cout << "Created Linked list is: ";
    printList(head);
}