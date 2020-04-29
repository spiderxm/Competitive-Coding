//
// Created by Mrigank Anand on 29/04/20.
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
    ll t;
    cin >> t;
    while (t--) {
        ll a, b, q;
        cin >> a >> b >> q;
        while (q--) {

            ll l, r;
            cin >> l >> r;
            ll count = 0;
            for (ll i = l; i <= r; i++) {
                if ((i % a) % b != (i % b) % a) {
                    count++;
                }
            }
            cout << count << " ";
        }
        cout << endl;
    }
    return 0;
}