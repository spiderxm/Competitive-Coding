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
        ll n;
        cin >> n;
        ll a = 2;
        ll t = 0;
        ll b = 1, x = 0;
        if (n % 4 == 0) {
            cout << "YES" << endl;
            for (ll i = 1; i <= n / 2; i++) {
                cout << a << " ";
                t += a;
                a = a + 2;
            }
            for (int j = n / 2 + 1; j < n; ++j) {
                cout << b << " ";
                x = x + b;
                b = b + 2;
            }
            cout << t - x << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}