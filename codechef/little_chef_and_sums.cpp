//
// Created by Mrigank Anand on 04/05/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include <bits/stdc++.h>

#define ll long long
#define sq(a) (a)*(a)
#define endl "\n"
#define pb push_back
#define v vector
#define mp make_pair
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define w() ll t; cin >> t; while(t--)
using namespace std;

//ll prefixSum(ll i, vector<ll> a) {
//    ll sum = 0;
//    for (int j = 0; j < i; j++) {
//        sum = sum + a.at(j);
//    }
////    cout << sum << endl;
//    return sum;
//}
//
//ll suffixSum(ll i, vector<ll> a) {
//    ll sum = 0;
//    for (int j = i - 1; j < a.size(); j++) {
//        sum += a.at(j);
//    }
////    cout << sum << endl;
//    return sum;
//}
//
//int main() {
//    ll t;
//    cin >> t;
//    while (t--) {
//        ll n;
//        cin >> n;
//        ll a[n];
//        for (ll i = 0; i < n; ++i) {
//            cin >> a[i];
//        }
//        ll e[n], f[n];
//        e[0] = a[0];
//        for (ll k = 1; k < n; ++k) {
//            e[k] = e[k - 1] + a[k];
//        }
//        f[0] = e[n - 1];
//        for (ll l = 1; l < n; ++l) {
//            f[l] = f[0] - e[l - 1];
//        }
////        for (int m = 0; m < n; ++m) {
////            cout << f[m] << " ";
////        }
////        for (int m = 0; m < n; ++m) {
////            cout << e[m] << " ";
////        }
////        cout << endl;
//        ll minn = INT_MAX;
//        ll index;
//        for (ll j = 1; j <= n; j++) {
//            ll sum = f[j - 1] + e[j - 1];
////            cout << sum << endl;
//            if (minn > sum) {
//                index = j;
//                minn = sum;
//            }
//        }
//        cout << index << endl;
//    }
//    return 0;
//}

int main() {
    w() {
        ll n;
        cin >> n;
        ll a[n];
        ll ans = 0;
        ll min = INT32_MAX;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (min > a[i]) {
                ans = i + 1;
                min = a[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}