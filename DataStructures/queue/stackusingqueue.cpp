//
// Created by Mrigank Anand on 01/09/20.
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

class Stack {
    queue<int> q1, q2;
public:
    int size() {
        return q1.size() + q2.size();
    }

    bool empty() {
        return size() == 0;
    }

    void push(int data) { // making the push function costly rather than pop and top
        q2.push(data);
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1, q2);
    }

    void pop() {
        if (!empty()) {
            q1.pop();
        }
    }

    int top() {
        if (!empty()) {
            return q1.front();
        }
    }

};

int main() {
    Stack s;
    for (int i = 0; i < 10; ++i) {
        s.push(i * i * i * i);
    }
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}