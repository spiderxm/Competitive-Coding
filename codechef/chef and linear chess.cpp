//
// Created by Mrigank Anand on 10/08/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<bits/stdc++.h>

#define ll long long
#define endl "\n"
using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        ll p[n];
        for (auto &x:p) {
            cin >> x;
        }
        ll b[n];
        for (int i = 0; i < n; ++i) {
            ll l = k / p[i];
            if (l * p[i] == k) {
                b[i] = l;
            } else {
                b[i] = INT64_MAX;
            }
        }
        ll min = *min_element(b, b + n);
        if (min == INT64_MAX) {
            cout << -1;
        } else {
            cout << k / min;
        }
        cout << endl;

    }
    return 0;
}