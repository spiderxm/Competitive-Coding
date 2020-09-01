//
// Created by Mrigank Anand on 31/08/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<bits/stdc++.h>

#define ll long long
using namespace std;

int main() {
    // STACK - LIFO (last in first out)
    stack<int> a;
    for (int i = 0; i < 10; ++i) {
        a.push(i); // O(1)
    }
    while (!a.empty()){
        cout << a.top() << " "; // O(1)
        a.pop(); // O(1)
    }
    return 0;
}