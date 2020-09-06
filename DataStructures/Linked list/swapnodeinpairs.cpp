//
// Created by Mrigank Anand on 05/09/20.
//

#include<iostream>

#define ll long long
using namespace std;

class node {
public:
    node *next;
    ll data;

    node(ll d) {
        data = d;
        next = NULL;
    }
};

void insertion_at_tail(node *&head, int d) {
    if (head == NULL) {
        head = new node(d);
    } else {
        node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        node *temp2 = new node(d);
        temp->next = temp2;
    }
}

void print(node *head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
}

node *swap_nodes(node *head) {
    if (head == NULL or head->next == NULL) {
        return head;
    }
    node *new_head = swap_nodes(head->next->next);
    node *temp = head->next;
    temp->next = head;
    head->next = new_head;
    return temp;
}

int main() {
    node *head = NULL;
    ll n;
    cin >> n;
    while (n--) {
        ll d;
        cin >> d;
        insertion_at_tail(head, d);
    }
    print(head);
    cout << endl;
    head = swap_nodes(head);
    print(head);
    return 0;
}