//
// Created by Mrigank Anand on 02/09/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<bits/stdc++.h>

#define ll long long
#define sq(a) (a)*(a)
#define endl "\n"
#define pb push_back
#define v vector
#define mp make_pair
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define w() ll t; cin >> t; while(t--)
using namespace std;

class node {
public:
    node *next;
    int data;

    node(int d) {
        data = d;
        next = NULL;
    }
};

int front(node *head) {
    if (head == NULL) {
        return -1;
    } else {
        return head->data;
    }
}

void push(node *&head, int data) {
    if (head == NULL) {
        head = new node(data);
    } else {
        node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        node *n = new node(data);
        temp->next = n;

    }
}

void pop(node *&head) {
    node *temp = head;
    head = head->next;
    delete temp;
}

bool empty(node *head) {
    return head == NULL;
}

int size(node *head) {
    int s = 0;
    while (head != NULL) {
        s++;
        head = head->next;
    }
}

int main() {
    node *head = NULL;
    for (int i = 0; i < 10; ++i) {
        push(head, i * i);
    }
    while (!empty(head)) {
        cout << front(head) << " ";
        pop(head);
    }
    delete head;
    return 0;
}