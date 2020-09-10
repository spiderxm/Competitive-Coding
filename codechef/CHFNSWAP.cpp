//
// Created by Mrigank Anand on 05/09/20.
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

int fact(ll n) {
    if (n == 0) return 1;
    if (n > 0) return n * fact(n - 1);
};

int NCR(ll n, ll r) {
    if (n == r) return 1;
    if (r == 0 && n != 0) return 1;
    else return (n * fact(n - 1)) / fact(n - 1) * fact(n - r);
};

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll count = 0;
        ll sum = n * (n + 1) / 2;
        if (sum % 2) {
            cout << 0 << endl;
        } else {
            ll ss = sum / 2;
            ll nn = (-1 + sqrt(1 + 8 * ss)) / 2;
            if (((nn * (nn + 1)) / 2) == ss) {
                cout << ((nn - 1) * nn) / 2 + ((n - nn - 1) * (n - nn)) / 2 << endl;
            } else {
                cout << n - nn << endl;
            }
        }
    }
    return 0;
}