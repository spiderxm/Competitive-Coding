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
        cout << head->data << " ";
        head = head->next;
    }
}

void remove_kth_element(node *head, ll k) {
    node *fast = head;
    node *slow = head;
    while (k--) {
        fast = fast->next;
    }
    while (fast->next != NULL) {
        fast = fast->next;
        slow = slow->next;
    }
    node *temp = slow->next;
    slow->next = slow->next->next;
    delete temp;
    return;
}

int main() {
    node *head = NULL;
    ll n;
    cin >> n;
    ll k;
    cin >> k;
    while (n--) {
        ll d;
        cin >> d;
        insertion_at_tail(head, d);
    }
    remove_kth_element(head, k);
    print(head);
    return 0;
}