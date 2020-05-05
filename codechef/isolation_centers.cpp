//
// Created by Mrigank Anand on 04/05/20.
//
// Problem code : CORUS
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

#include<unordered_map>

int main() {
    string u = "orona";
    ll t;
    cin >> t;
    while (t--) {
        ll n, q;
        cin >> n >> q;
        unordered_map<char, ll> a;
        ll c;
        for (ll j = 0; j < n; j++) {
            char u;
            cin >> u;
            a[u]++;
        }
//        for (auto d:a) {
//            cout << d.first << " " << d.second << endl;
//        }
        ll ans = 0;
        for (ll i = 0; i < q; i++) {
            cin >> c;
            for (auto e:a) {
                if (e.second >= c)
                    ans += e.second - c;
            }
            cout << ans << endl;
            ans = 0;
        }

    }
    return 0;
}