//
// Created by Mrigank Anand on 30/04/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<iostream>
#include<vector>
#include <algorithm>

#define ll long long
#define sq(a) (a)*(a)
#define endl "\n"
#define pb push_back
#define v vector
#define mp make_pair
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
    ll k, n;
    cin >> k >> n;
    ll a[k][n];
    ll b[n * k];
    ll t = 0;
    for (ll i = 0; i < k; i++) {
        for (ll j = 0; j < n; j++) {
            cin >> a[i][j];
            b[t] = a[i][j];
            t++;
        }
    }

    sort(b, b + t);
    for (auto y:b) {
        cout << y << " ";
    }
    cout << endl;
    return 0;
}