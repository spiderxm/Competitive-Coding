//
// Created by Mrigank Anand on 28/04/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<iostream>
#include<queue>

#define ll long long
#define sq(a) (a)*(a)
#define endl "\n"
#define pb push_back
#define v vector
#define mp make_pair

#include <algorithm>

#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

ll pow(ll a, ll b) {
    ll ans = 1;
    while (b > 0) {
        if (b & 1) {
            ans = ans * a;
        }
        b = b >> 1;
        a = a * a;
    }
    return ans;
}

using namespace std;

int main() {
    // FIFO - first in first out
    queue<int> a;
    a.push(12);
    a.push(1);
    a.push(21);
    a.push(45);
    a.push(34);
    a.push(23);
    a.pop();
    cout << a.front() << endl;
    cout << a.back() << endl;
    while (!a.empty()) {
        cout << a.front() << endl;
        a.pop();
    }
    return 0;
}