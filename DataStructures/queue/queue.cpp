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
    int *arr;
    int f, r, cs, ms;
public:
    Queue(int size = 5) {
        arr = new int[size];
        f = 0;
        ms = size;
        r = ms - 1;
        cs = 0;
    }
    bool empty() {
        return cs == 0;
    }

    bool full() {
        return cs == ms;
    }

    int front() {
        return arr[f];
    }

    void push(int data) {
        if(!full()){
            r = (r+1)%ms;
            arr[r] = data;
            cs++;
        }
    }

    void pop() {
        if (!empty()) {
            f = (f + 1) % ms;
            cs--;
        }
    }

    ~Queue() {
        delete[] arr;
        cout << "Queue deleted";
    }
};
int main() {
    Queue q;
    for (int i = 1; i <= 6; ++i) {
        q.push(i);
    }
    q.pop();
    q.pop();
    q.push(7);
    while (!q.empty()){
        cout<< q.front() << " ";
        q.pop();
    }
    return 0;
}