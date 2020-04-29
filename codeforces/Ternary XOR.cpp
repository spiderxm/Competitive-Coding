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
        ll n, n1;
        cin >> n;
        n1 = n;
        ll a;
        cin >> a;
        int b[n], c[n], d[n];
        while (n--) {
            b[n] = a % 10;
            a = a / 10;
        }
        b[0] = a % 10;
        for (ll i = 1; i < n1; i++) {
            if (b[i] == 2) {
                c[i] = 1;
                d[i] = 1;
            } else if (b[i] == 1) {
                c[i] = 1;
                d[i] = 0;
            } else {
                c[i] = 0;
                d[i] = 0;
            }
        }
        c[0] = 1;
        d[0] = 1;
        for (ll i = 0; i < n1; i++) {
            cout << c[i];
        }
        cout << endl;
        for (ll i = 0; i < n1; i++) {
            cout << d[i];
        }
        cout << endl;

    }

    return 0;
}