// Created by Mrigank Anand on 31/08/20.
// implementing stack using vector
//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<bits/stdc++.h>

#define ll long long
#define endl "\n"
#define v vector
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

class Stack {
private:
    vector<int> v;
public:
    void push(int data) {
        v.push_back(data);
    }

    bool empty() {
        return v.size() == 0;
    }

    void pop() {
        if (!empty()) {
            v.pop_back();
        } else {
            cout << "Empty stack";
        }
    }

    int top() {
        return v[v.size() - 1];
    }
};
//  we can generalise this data for all data types
int main() {
    boost;
    Stack s;
    for (int i = 0; i < 5; ++i) {
        s.push(i);
    }
    for (int j = 0; j < 5; ++j) {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}