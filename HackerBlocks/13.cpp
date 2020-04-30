//
// Created by Mrigank Anand on 30/04/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<iostream>
#include<vector>

#define ll long long
#define sq(a) (a)*(a)
#define endl "\n"
#define pb push_back
#define v vector
#define mp make_pair

#include <algorithm>

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
    return abs(a.first - a.second) < abs(b.first - b.second);
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            ll o;
            cin >> o;
            a.push_back(o);
        }
        ll m;
        cin >> m;
        vector<pair<int, int>> b;
        sort(a.begin(), a.end());
        for (int j = 0; j < n; ++j) {
            for (int i = j + 1; i < n; ++i) {
                if (a[i] + a[j] == m) {
                    b.push_back(make_pair(a[j], a[i]));
                }
            }
        }
        sort(b.begin(), b.end(), compare);
        cout << "Deepak should buy roses whose prices are " << b[0].first << " and " << b[0].second << "." << endl;

    }
    return 0;
}
/*
 * 2
2
40 40
80

5
10 2 6 8 4
10
 */