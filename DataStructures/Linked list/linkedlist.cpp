//
// Created by Mrigank Anand on 26/06/20.
//

#include <bits/stdc++.h>

using namespace std;

class node {
public:
    int data;
    node *next;
} *first;
//node

void create(int a[], int n) {
    node *t, *last;
    first = new node();
    first->data = a[0];
    first->next = NULL;
    last = first;
    // last is same as the first here
    for (int i = 1; i < n; ++i) {
        t = new node();
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
        // assign last as the current node
    }
}

int display(node *first) {
    node *p = first;
    while (p) {
        cout << p->data << " ";
        p = p->next;
    }
}

// calculates sum of a linked list
int sum(node *first) {
    node *p = first;
    int sum = 0;
    while (p) {
        sum = sum + p->data;
        p = p->next;
    }
    return sum;
}

int max(node *first) {
    int max = INT_MIN;
    node *p = first;
    while (p) {
        if (max<p->data) {
            max = p->data;
        }
        p = p->next;
    }
    return max;
}

int min(node *first) {
    int min = INT_MAX;
    node *p = first;
    while (p) {
        if (min > p->data) {
            min = p->data;
        }
        p = p->next;
    }
    return min;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    create(a, n);
    display(first);
    cout << endl << sum(first) << endl << max(first) << endl << min(first);
}