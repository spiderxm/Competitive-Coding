//
// Created by Mrigank Anand on 09/08/20.
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

void bucketsort(ll a[], ll n) {
    vector<ll> v[101];
    for (int i = 0; i < n; ++i) {
        int m = a[i];
        v[m].push_back(m);
    }
    // iterate over vector
    for (int i=0; i<n; i++)
        sort(v[i].begin(), v[i].end());
}

int main() {
    ll a[] = {99, 98, 39, 23, 89, 83, 100, 101, 30, 45, 54, 56};
    ll n = sizeof(a) / sizeof(int);
    bucketsort(a, n);
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }

    return 0;
}