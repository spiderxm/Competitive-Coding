// Created by Mrigank Anand on 31/08/20.
// implementing stack using vector
//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<bits/stdc++.h>

#define ll long long
#define endl "\n"
#define v vector
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

template<typename T> // we can pass multiple datatypes here
class Stack {
private:
    vector<T> v;
public:
    void push(T data) {
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

    T top() {
        return v[v.size() - 1];
    }
};

//  we can generalise this data for all data types
int main() {
    boost;
    Stack<char> s;
    for (int i = 99; i < 104; ++i) {
        s.push(char(i));
    }
    for (int j = 0; j < 5; ++j) {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}