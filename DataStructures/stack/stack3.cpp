//
// Created by Mrigank Anand on 31/08/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<bits/stdc++.h>

#define ll long long
using namespace std;

int main() {
    stack<int> a, b;
    for (int i = 0; i < 10; ++i) {
        a.push(i);
    }
    ll n = a.size();
    cout << n << endl;
    for (int j = 0; j < n; ++j) {
        // time complexity is O(N^2)
        ll x = a.top();
        a.pop();
        while (!a.empty()) {
            b.push(a.top());
            a.pop();
        }
        a.push(x);
        ll s = b.size();
        for (int i = 0; i < s; ++i) {
            a.push(b.top());
            b.pop();
        }
    }
    while (!a.empty()) {
        cout << a.top() << " ";
        a.pop();
    }

    return 0;
}