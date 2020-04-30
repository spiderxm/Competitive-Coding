//
// Created by Mrigank Anand on 29/04/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<iostream>
#include<map>

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
    // multiple elements can have same key values
    multimap<char, string> a;
    ll n;
    cin >> n;
    while (n--) {
        char ab;
        string ba;
        cin >> ab >> ba;
        a.insert(mp(ab, ba));
    }
    for (auto p:a) {
        cout << p.first << " -> " << p.second << endl;
    }
    a.erase(a.begin());
    auto it = a.lower_bound('b');
    if (it != a.end()) {
        cout << it->second << endl;
    }
    it = a.upper_bound('b');
    if (it != a.end()) {
        cout << it->second << endl;
    }
    char finder;
    cin >> finder;
    auto t = a.find(finder);
    if (t->second == "b") {
        a.erase(finder);
    }
    for (auto p:a) {
        cout << p.first << " -> " << p.second << endl;
    }
    // insert erase and find in log(N) time as it uses self balancing BST.
    return 0;
}