//
// Created by Mrigank Anand on 26/06/20.
//
#include <bits/stdc++.h>
// Node
// contains data and a pointer pointer is of type node as it is pointing to node.
using namespace std;

class Node {
public:
    int data;
    Node *next;
} *first;


void create(int A[], int n) {
    int i;
    Node *t, *last;
    first = new Node();
    first->data = A[0];
    first->next = NULL;
    last = first;
    for (int j = 1; j < n; ++j) {
        t = new Node();
        t->data = A[j];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

int display(Node *first) {
    Node *p = first;
    while (p) {
        cout << p->data << " ";
        p = p->next;
    }
}

int main() {
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;
    // we need a pointer to declare in heap
    //without pointer memory will be allocated in stack
    head = new Node(); //new node is created
    second = new Node();
    third = new Node();

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;
    cout << head->data << " " << second->data << " " << third->data << endl;
    cout << head->next << " " << second->next << " " << third->next << endl;


    int A[] = {3, 4, 5, 5, 6, 7};
    create(A, 6);
    display(first);
}