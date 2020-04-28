//
// Created by Mrigank Anand on 28/04/20.
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
    ll t;
    cin >> t;
    while (t--) {
        ll x, n, m;
        cin >> x >> n >> m;
        while (x > 0 && (n > 0 || m > 0)) {
            ll h = x;
            if (h > 20 and (n > 0)) { // to prevent increasing of health
                x = x / 2 + 10;
                n--;
            } else if (m > 0) {
                x = x - 10;
                m--;
            } else if (n > 0) {
                x = x / 2 + 10;
                n--;
            }
        }
        if (x <= 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}