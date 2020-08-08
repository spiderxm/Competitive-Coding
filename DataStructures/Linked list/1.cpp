//
// Created by Mrigank Anand on 02/08/20.
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

void insertion_at_head(node *&head, int d) {
    /*
     * Insertion at the head
     */
    if (head == NULL) {
        head = new node(d);
        return;
    } else {
        node *a = new node(d);
        a->next = head;
        head = a;
    }
}

int length(node *head) {
    /* returns the length of the linked list */
    ll l = 0;
    while (head != NULL) {
        l++;
        head = head->next;
    }
    return l;
}


void InsertAtTail(node *&head, int data) {
    if (head == NULL) {
        head = new node(data);
        return;
    }
    node *tail = head;
    while (tail->next != NULL) {
        tail = tail->next;
    }
    tail->next = new node(data);
    return;
}

void InsertinMiddle(node *&head, int d, int p) {
    if (head == NULL || p == 0) {
        insertion_at_head(head, d);
        return;
    } else if (p > length(head)) {
        InsertAtTail(head, d);
    } else {
        // take p-1 jumps
        int jump = 1;
        node *temp = head;
        while (jump <= p - 1) {
            temp = temp->next;
            jump++;
        }
        node *n = new node(d);
        n->next = temp->next;
        temp->next = n;
    }
}

void print(node *head) {
    while (head != NULL) {
        cout << head->data;
        if (head->next != NULL) {
            cout << "->";
        }
        head = head->next;
    }
}


node *deleteHead(node *head) {
    if (head == NULL) {
        return NULL;
    }
    node *temp = head->next;
    delete head;
    head = temp;
    return head;
}

void deletelist(node *head) {
    while (head != NULL) {
        head = deleteHead(head);
        head = head->next;
    }
}

bool search(node *head, int ele) {
    // linear search
    // we dont perform binary search even if it sorted
    while (head != NULL) {
        if (head->data == ele) {
            return true;
        }
        head = head->next;
    }
    return false;
}

node *input(node *&head) {
    ll n;
    cin >> n;
    while (n != -1) {
        insertion_at_head(head, n);
        cin >> n;
    }
    return head;
}

// swapping is a bad idea for sorting linked list

int main() {

    node *head = NULL;
    // Linked List
    // Pointers are used in implement Linked List
    // STL implementation is also avaliable for each data structure
//    insertion_at_head(head, 0);
//    insertion_at_head(head, 1);
//    insertion_at_head(head, 2);
//    insertion_at_head(head, 3);
//    InsertAtTail(head, 10);
//    insertion_at_head(head, 4);
//    insertion_at_head(head, 5);
//    InsertinMiddle(head, 3, 4);
//    head = deleteHead(head);
    head = input(head);
//    cout << search(head, 3) << endl;
    print(head);
    cout << endl;
    return 0;
}