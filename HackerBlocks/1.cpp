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
#define pb push_back
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

int main() {

    ll n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; ++i) {
        int o;
        cin >> o;
        a.pb(o);
    }
    int q;
    cin >> q;
    while (q--) {
        int y;
        cin >> y;
        auto it = lower_bound(a.begin(), a.end(), y);
        auto it2 = upper_bound(a.begin(), a.end(), y);

        if (it - a.begin() < a.size()) {
            cout << it - a.begin() << " ";
        } else {
            cout << -1 << " ";
        }

        if (it2 - a.begin() < a.size()) {
            if (a.at(it2 - a.begin()) == a.at(it - a.begin())) {
                cout << it2 - a.begin() << endl;
            } else {
                cout << it2 - 1 - a.begin() << endl;
            }
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}