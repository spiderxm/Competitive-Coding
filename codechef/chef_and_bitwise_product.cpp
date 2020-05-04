//
// Created by Mrigank Anand on 04/05/20.
//

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
    ll t;
    cin >> t;
    while (t--) {
        ll x, y, l, r;
        cin >> x >> y >> l >> r;

        ll ans = 0;
        ll c = l;
        for (ll i = l; i < r; i++) {
            ll u;
            u = (x & i) * (i & y);
            if (ans < u) {
                ans = u;
                c = i;
            }
        }
        cout << c << endl;
    }
    return 0;
}