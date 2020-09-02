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
    int data;
    node *next;

    node(int x) {
        next = NULL;
        data = x;
    }
};

void push(node *&head, int x) {
    if (head == NULL) {
        head = new node(x);
    } else {
        node *temp = new node(x);
        temp->next = head;
        head = temp;
    }
}

void pop(node *&head) {
    node *temp = head;
    head = head->next;
    delete temp;
}

int top(node *head) {
    if (head == NULL) {
        return -1;
    } else {
        return head->data;
    }
}

bool empty(node *head) {
    if (head == NULL) {
        return true;
    }
    return false;
}

int size(node *head) {
    int size = 0;
    while (head != NULL) {
        size++;
        head = head->next;
    }
}


int main() {
    node *head = NULL;
    for (int i = 0; i < 10; ++i) {
        push(head, i * i);
    }
    while (!empty(head)) {
        cout << top(head) << " ";
        pop(head);
    }
    return 0;
}