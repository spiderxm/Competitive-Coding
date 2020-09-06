//
// Created by Mrigank Anand on 06/09/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<bits/stdc++.h>

#define ll long long
#define endl "\n"
using namespace std;

double time(ll a, ll b, ll c, ll d) {
    if (a == c) {
        return -1;
    } else {
        if (double((d - b) / (a - c)) > 0)
            return 1;
        else
            return -1;
    }
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        ll z = 0;
        for (int j = 0; j < n; ++j) {
            if (a[j] == 0) {
                z++;
            }
        }
        ll g = 1;
        for (int k = 1; k < n; ++k) {
            if (a[k] > a[k - 1]) {
                g++;
            }
        }
        if (z == n || g == n) {
            cout << 1 << " " << 1 << endl;
            continue;
        }
        ll d[n];
        for (int m = 0; m < n; ++m) {
            d[m] = 0;
        }
        for (int l = 0; l < n; ++l) {
            for (int i = 0; i < n; ++i) {
                if (l == i) {
                    continue;
                }
                double timee = time(a[l], l + 1, a[i], i + 1);
                if (timee > 0) {
                    d[l]++;
                }
            }
        }
        for (int i1 = 0; i1 < n; ++i1) {
            d[i1]++;
        }
        ll min, max;
        min = INT64_MAX;
        max = INT64_MIN;
        for (auto x:d) {
            cout << "---" << x;
            if (x > max) {
                max = x;
            }
            if (min > x) {
                min = x;
            }
        }
        cout << endl;
        cout << min << " " << max << endl;
    }
    return 0;
}