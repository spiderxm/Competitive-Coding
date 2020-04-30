//
// Created by Mrigank Anand on 30/04/20.
//


//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<iostream>
#include<vector>
#include <algorithm>
#include <math.h>

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

#include <map>

using namespace std;

int main() {
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll k;
    ll maxx = 0;
    cin >> k;
    ll y = n / k;
    for (ll i = 0; i <= n - k; ++i) {
        for (ll j = 0; j < i + k; ++j) {
            if (maxx < a[j]) {
                maxx = a[j];
            }
        }
        cout << maxx << " ";
        maxx = 0;
    }
    return 0;
}