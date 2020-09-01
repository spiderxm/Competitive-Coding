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

template<typename t>
class Stack {
    queue<t> q1, q2;
public:
    bool empty() {
        return size()==0;
    }

    void push(t x) {
        q1.push(x);
    }

    void pop() {
        if (q1.size() > 0) {
            while (q1.size() > 1) {
                q2.push(q1.front());
                q1.pop();
            }
        }
        //removes the last element
        q1.pop();
        swap(q1, q2);
    }

    t top() {
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }
        t element = q1.front();
        q2.push(element);
        q1.pop();
        swap(q1, q2);
        return element;
    }
    int size(){
        return q1.size() + q2.size();
    }

};

int main() {
    Stack<int> a;
    for (int i = 0; i < 10; ++i) {
        a.push(i*i);
    }
   while (!a.empty()){
       cout << a.top() << " ";
       a.pop();
   }
    return 0;
}