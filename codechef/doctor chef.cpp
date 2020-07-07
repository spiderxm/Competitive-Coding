//
// Created by Mrigank Anand on 06/07/20.
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
    ll t;
    cin >> t;
    while (t--) {
        ll n, x;
        cin >> n >> x;
        ll a[n];
        for (ll &x : a) {
            cin >> x;
        }
        sort(a, a + n);
        auto lower = lower_bound(a, a + n, x);
        ll b[n];
        ll i = 0;
        for (int j = lower - a; j < n; ++j) {
            b[i] = a[j];
            i++;
        }
        for (int k = 0; k < lower - a; ++k) {
            b[i] = a[k];
            i++;
        }
//        for (auto x: b) {
//            cout << x << " ";
//        }
        ll d = 0;
        for (int i = 0; i < n; ++i) {
            while (x < b[i]) {
                d++;
                x = x * 2;
            }
            if (x >= b[i]) {
                d++;
                x = b[i];
                x = x * 2;
            }
        }
        cout << d << endl;


    }
    return 0;
}
