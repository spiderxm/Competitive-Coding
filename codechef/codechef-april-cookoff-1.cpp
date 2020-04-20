//
// Created by Mrigank Anand on 20/04/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<iostream>

#define ll long long
#define sq(a) (a)*(a)
#define endl "\n"
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, q;
        cin >> n >> q;
        ll a[q], b[q];
        ll count = 0;
        for (ll i = 0; i < q; i++) {
            cin >> a[i] >> b[i];
        }
        count += abs(a[0]) + abs(a[0] - b[0]);
        for (ll i = 1; i < q; i++) {
            count += abs(a[i] - b[i]);
            count += abs(a[i] - b[i - 1]);
        }
        cout << count << "\n";
    }

    return 0;
}