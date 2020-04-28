//
// Created by Mrigank Anand on 28/04/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<iostream>
#include<vector>
#include<algorithm>

#define ll long long
#define sq(a) (a)*(a)
#define endl "\n"
#define pb push_back
#define v vector
#define mp make_pair
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

ll pow(ll a, ll b) {
    ll ans = 1;
    while (b > 0) {
        if (b & 1) {
            ans = ans * a;
        }
        b = b >> 1;
        a = a * a;
    }
    return ans;
}

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    return b.second > a.second;
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++) {
            ll a, b;
            cin >> a >> b;
            v.pb(mp(a, b));
        }
        sort(v.begin(), v.end(), compare);
        ll done = 1;
        ll second = v.at(0).second;
        for (ll j = 1; j < n; j++) {
            if (second <= v.at(j).first) {
                done++;
                second = v.at(j).second;
            }
        }
        for (auto a:v) {
            cout << a.first << " " << a.second << endl;
        }
        cout << done << endl;
    }
    return 0;
}