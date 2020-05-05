//
// Created by Mrigank Anand on 04/05/20.
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
#define mod 1000000007
using namespace std;
const int MAX = 10000000;

int f[MAX] = {0};

ll fib(int n) {
    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return (f[n] = 1);

    if (f[n])
        return f[n] % mod;

    int k = (n & 1) ? (n + 1) / 2 : n / 2;

    f[n] = (n & 1) ? (fib(k) * fib(k) + fib(k - 1) * fib(k - 1))
                   : (2 * fib(k - 1) + fib(k)) * fib(k);

    return f[n] % mod;
}

int calculateSum(int n) {
    return fib(n + 1) - 1;
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
//        ll a[k];
//        a[0] = 0;
//        a[1] = 1;
//        for (int i = 2; i < k; ++i) {
//            a[i] = a[i - 1] + a[i - 2];
//        }
        ll k1 = n / k;
        ll k2 = (n - k1 * k);
//        ll ans = 0;
//        ll ans1 = 0;
//        for (int j = 0; j < k; ++j) {
//            ans = ans + a[j];
//            ans = ans % mod;
//        }
//        for (int j = 0; j < k2; ++j) {
//            ans1 = ans1 + a[j];
//            ans = ans % mod;
//        }
//        cout << (k1 * ans % mod + ans1 % mod) % mod << endl;
        cout << k1 * calculateSum(k) + calculateSum(k2) << endl;
    }
    return 0;
}

