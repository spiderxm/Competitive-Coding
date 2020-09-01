//
// Created by Mrigank Anand on 31/08/20.
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

void insert_at_bottom(stack<ll> &a, ll t) {
    stack<ll> b;
    while (!a.empty()) {
        b.push(a.top());
        a.pop();
    }
    a.push(t);
    while (!b.empty()) {
        a.push(b.top());
        b.pop();
    }
}

void insert_bottom(stack<ll> &a, ll t) {
    if (a.empty()) {
        a.push(t);
        return;
    }
    ll data = a.top();
    a.pop();
    insert_bottom(a, t);
    a.push(data);
}


void reverse(stack<ll> &a) {
    if (a.empty()) {
        return;
    }
    ll top = a.top();
    a.pop();
    reverse(a);
    insert_bottom(a, top);
}

int main() {
    // recursively reverse a stack
    boost;
    stack<ll> a;
    for (int i = 0; i < 10; ++i) {
        a.push(i);
    }
    ll s = a.size();
    for (int i = 0; i < s; ++i) {
        cout << a.top() << " ";
        a.pop();
    }
    reverse(a);
    s = a.size();
    for (int i = 0; i < s; ++i) {
        cout << a.top() << " ";
        a.pop();
    }

    return 0;
}
