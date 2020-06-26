//
// Created by Mrigank Anand on 26/06/20.
//
#include <bits/stdc++.h>

// Node
// contains data and a pointer pointer is of type node as it is pointing to node.
class Node {
public:
    int data;
    Node *next;
};

class  Node1{
public:
    int data;
    Node1 *next;

};
#include <iostream>

using namespace std;

int main() {
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;
    // we need a pointer to declare in heap


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
    cout << head->next << " " << second->next << " " << third->next;


    cout<< head  << " " <<  second << " " << third;

}