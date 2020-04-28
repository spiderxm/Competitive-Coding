//
// Created by Mrigank Anand on 28/04/20.
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
    if (a.second == b.second) {
        return b.first > a.first;
    } else {
        return b.second > a.second;
    }
}

int main() {

    ll n;
    cin >> n;
    vector<pair<int, int>> ab;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        ab.pb(mp(a - b, b + a));
    }
    sort(ab.begin(), ab.end(), compare);

    int current = ab[0].second;
    int d = 1;
    for (int j = 1; j < n; ++j) {
        if (ab[j].first >= current) {
            d++;
            current = ab[j].second;
        }
    }
    cout << d << endl;

    return 0;
}