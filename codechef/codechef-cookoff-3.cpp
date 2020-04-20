//
// Created by Mrigank Anand on 20/04/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<iostream>

#define ll long long

#include "string"

#define sq(a) (a)*(a)
#define endl "\n"
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll k = 0, l = 0;
        string s, r;
        cin >> s;
        cin >> r;
        ll z = 0;
        ll n = s.length();

        for (ll i = 0; i < n; i++) {
            if (s[i] != r[i]) {
                k++;
            } else {
                z++;
            }
        }
        l = k;
        cout << k * l << endl;
    }
    return 0;
}