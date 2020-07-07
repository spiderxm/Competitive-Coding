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
        ll n;
        cin >> n;
        ll n1 = 4 * n - 1;
        vector<pair<int, int>> a(n1);
        for (int i = 0; i < n1; ++i) {
            ll b, c;
            cin >> b >> c;
            a[i].first = b;
            a[i].second = c;
        }

    }
    return 0;
}