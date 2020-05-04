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
        ll n;
        cin >> n;
        ll a;
        vector<ll> v, z;
        for (int i = 0; i < n; ++i) {
            cin >> a;
            v.push_back(a);
        }
        for (int j = 2; j < n; ++j) {
            z.push_back(v[j] + v[j - 1] + v[j - 2]);
        }
        z.push_back(v[0] + v[v.size() - 1] + v[v.size() - 2]);
        z.push_back(v[0] + v[v.size() - 1] + v[1]);
        ll maxx = 0;
        for (auto u:z) {
            maxx = max(maxx, u);
        }
        cout << maxx << endl;
    }
    return 0;
}