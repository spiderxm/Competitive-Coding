//
// Created by Mrigank Anand on 31/08/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<bits/stdc++.h>

#define ll long long
#define sq(a) (a)*(a)
#define endl "\n"
#define pb push_back
#define v vector
#define mp make_pair
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define w() ll t; cin >> t; while(t--)
using namespace std;

int main() {
    ll n;
    cin >> n;
//    n = pow(2, n);
    ll a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    ll x;
    cin >> x;
    ll ans = false;
    for (int j = 0; j < n; ++j) {
        if(x==a[j]){
            cout << "Yes" << endl;
            ans = true;
        }
    }
    if(!ans){
        cout << "No" << endl;
    }
//    ll b[n], c[n];
//    ll x = n / 2;
//    for (int j = 0; j < x; ++j) {
//        c[j] = 2 * j + 2; // even
//    }
//    for (int j = 0; j < x; ++j) {
//        b[j] = 2 * j + 1; // odd
//    }
//    ll d = x - 1;
//    ll e = x / 2 - 1;
//    ll f[x], g[x];
//    for (int k = 0; k < x; ++k) {
//        if (k % 2 == 0) {
//            f[k] = c[d];
//            g[k] = b[d];
//            d--;
//        } else {
//            f[k] = c[e];
//            g[k] = b[e];
//            e--;
//        }
//    }
//    for (int l = 0; l < x; ++l) {
//        cout << f[l] << " ";
//    }
//    for (int l = 0; l < x; ++l) {
//        cout << g[l] << " ";
//    }

}