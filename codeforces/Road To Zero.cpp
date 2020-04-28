//
// Created by Mrigank Anand on 28/04/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<iostream>
#include<vector>
#include <math.h>

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

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll x, y, a, b;
        ll sum = 0;
        cin >> x >> y >> a >> b;
        if (x == 0 && y == 0) {
            cout << 0 << endl;
        } else {
            if (a + a >= b) {
                ll u = abs(x - y);
                sum = u * a;
                if (x > y) {
                    sum += y * b;
                } else {
                    sum += x * b;
                }
                cout << sum << endl;
            } else {
                cout << (x + y) * a << endl;
            }
        }
    }
    return 0;
}