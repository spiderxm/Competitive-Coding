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
    w() {
        ll n;
        cin >> n;
        ll a;
        ll x[n];
        for (int i = 0; i < n; ++i) {
            cin >> x[i];
        }
        ll mi = INT_MAX;
        ll ma = INT_MIN;
        ll b[n - 1];
        for (int j = 0; j < n - 1; ++j) {
            b[j] = abs(x[j] - x[j + 1]);
        }
        vector<ll> c;
        c.push_back(0);
        ll i = 0;
        for (int k = 0; k < n - 1; ++k) {
            if (b[k] > 2) {
                i++;
                c.push_back(0);
            } else {
                c[i]++;
            }
        }
        for (auto &x:c) {
            x++;
        }
        for (auto x:c) {
            mi = min(x,mi);
            ma = max(x,ma);
        }
        cout << mi << " " << ma << endl;
    }
    return 0;
}