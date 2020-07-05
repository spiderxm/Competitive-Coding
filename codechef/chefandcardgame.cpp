//
// Created by Mrigank Anand on 06/07/20.
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

ll getSum(ll n) {
    ll sum = 0;
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll a[n];
        ll b[n];
        for (int i = 0; i < n; ++i) {
            ll c;
            ll d;
            cin >> c >> d;
            c = getSum(c);
            d = getSum(d);
            a[i] = c;
            b[i] = d;
        }
        ll p1 = 0, p2 = 0;
        for (int j = 0; j < n; ++j) {
            if (a[j] > b[j]) {
                p1++;
            }
            if (b[j] > a[j]) {
                p2++;
            }
            if(a[j] == b[j]){
                p1++;
                p2++;
            }
        }
        if (p1 > p2) {
            cout << 0 << " " << p1;
        }
        if (p2 > p1) {
            cout << 1 << " " << p2;
        }
        if (p1 == p2) {
            cout << 2 << " " << p2;
        }
        cout << endl;
    }
    return 0;
}

