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

bool compare(string a, string b) {
    int n1 = a.length();
    int n2 = b.length();
    if (n1 > n2) {
        for (int i = 0; i < n1; i++) {
            if (a[i] != b[i]) {
                return b > a;
            }
            return a > b;
        }
    } else if (n1 < n2) {
        for (int i = 0; i < n2; i++) {
            if (b[i] != a[i]) {
                return a < b;
            }
            return a < b;
        }
    }
}

int main() {
    ll n;
    cin >> n;
    vector<string> a;
    for (ll i = 0; i < n; i++) {
        string b;
        cin >> b;
        a.pb(b);
    }
    sort(a.begin(), a.end(), compare);
    for (auto o:a) {
        cout << o << endl;
    }
    return 0;
}