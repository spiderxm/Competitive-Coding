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

class Queue {
    stack<int> s1, s2;
public:
    void pop() {
        while (s1.size() != 1) {
            s2.push(s1.top());
            s1.pop();
        }
        s1.pop();
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }

    int front() {
        while (s1.size() != 1) {
            s2.push(s1.top());
            s1.pop();
        }
        int ele = s1.top();
        s1.pop();
        s2.push(ele);

        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
        return ele;
    }

    bool empty() {
        return size() == 0;
    }

    int size() {
        return s1.size() + s2.size();
    }

    void push(int d) {
        s1.push(d);
    }
};

int main() {
    // implementing queue using stack
    Queue q;
    for (int i = 0; i < 10; ++i) {
        q.push(i * i);
    }
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}