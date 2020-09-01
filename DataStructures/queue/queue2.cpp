//
// Created by Mrigank Anand on 01/09/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<bits/stdc++.h>
using namespace std;

class Queue {
    list<int> a;
    int cs = 0;
public:
    void push(int data) {
        a.push_back(data);
        cs++;
    }

    bool empty() {
        return cs == 0;
    }

    void pop() {
        if (!empty()) {
            a.pop_front();
            cs--;
        }
    }

    int front() {
        return a.front();
    }

};

int main() {
    // Implementing queue using stl linked list
    Queue q;
    for (int i = 0; i < 10; ++i) {
        q.push(i);
    }
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}

