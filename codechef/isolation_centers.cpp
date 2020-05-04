//
// Created by Mrigank Anand on 04/05/20.
//
// Problem code : CORUS
//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<iostream>
#include<vector>
#include <algorithm>
#include<queue>
#include<math.h>
#include<map>
#include<set>

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
    string u = "orona";
    ll t;
    cin >> t;
    while (t--) {
        map<char, int> a;
        ll n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        ll c[q];
        ll ans = 0;
        for (int j = 0; j < n; j++) {
            if (a.count(a[s[j]])) {
                a[s[j]] = 1;
            } else {
                a[s[j]] = a[s[j]] + 1;
            }
        }
//        for (auto d:a) {
//            cout << d.first << " " << d.second << endl;
//        }
        for (int i = 0; i < q; i++) {
            cin >> c[i];
            for (auto e:a) {
                e.second = e.second - c[i];
                if (e.second < 0) {
                    e.second = 0;
                }
                ans += e.second;
            }
            cout << ans << endl;
            ans = 0;
        }

    }
    return 0;
}