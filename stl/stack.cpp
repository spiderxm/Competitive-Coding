//
// Created by Mrigank Anand on 28/04/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<iostream>
#include<stack>

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
    // LIFO - Last in first out
    stack<int> a;
    a.push(12);
    a.push(13);
    a.push(14);
    a.push(15);
    a.push(16);
    a.pop();

    cout << a.top() << endl;
    cout << a.size() << endl;
    cout << a.empty() << endl;
    if (!a.empty()) {
        cout << a.top() << endl;
    }

    for (int i = 0; i < a.size(); i++) {
        cout << a.top() << " ";
        a.pop();
    }
    cout << endl;
    return 0;
}