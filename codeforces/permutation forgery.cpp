//
// Created by Mrigank Anand on 07/09/20.
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

bool greater(int a, int b) {
    return a > b;
}

//
//int main() {
//    w() {
//        ll n;
//        cin >> n;
//        ll a[n];
//        for (int i = 0; i < n; ++i) {
//            cin >> a[i];
//        }
//        for (int j = 0; j < n; ++j) {
//            cout << a[n - 1 - j] << " ";
//        }
//        cout << endl;
//    }
//    return 0;
//
//}
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        ll sum = 0, r = 0;
        cin >> n;
        while (n--) {
            ll v;
            cin >> v;
            sum = sum + v;
            r = max(-sum, r);
        }
        cout << r << endl;
    }
    return 0;
}