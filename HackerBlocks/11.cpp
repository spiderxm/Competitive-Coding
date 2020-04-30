//
// Created by Mrigank Anand on 30/04/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<iostream>
#include<vector>

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
    string a;
    cin >> a;
    ll n = a.length();
    char b[n];
    for (int i = 0; i < n; ++i) {
        b[i] = a[i];
    }
    sort(b, b + n);
    do {
        for (int i = 0; i < n; ++i) {
            cout << b[i];
        }
        cout << endl;
    } while (next_permutation(b, b + n));
    return 0;
}