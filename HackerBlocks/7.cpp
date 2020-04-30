
//
// Created by Mrigank Anand on 30/04/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<iostream>
#include<vector>
#include <algorithm>

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

#include <map>

using namespace std;

int main() {
    ll n;
     cin >> n;
    ll max = 0, number;
    map<int, int> a;
    for (int i = 0; i < n; i++) {
        ll ab;
        cin >> ab;
        auto it = a.find(ab);
        if (it != a.end()) {
            it->second++;
        } else {
            a[ab] = 1;
        }
    }
    for (auto t:a) {
        if (max <= t.second) {
            number = t.first;
            max = t.second;
        }
    }
    cout << number << endl;
    return 0;
}