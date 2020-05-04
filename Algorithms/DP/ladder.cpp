//
// Created by Mrigank Anand on 04/05/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<iostream>
#include<vector>
#include <algorithm>
#include<queue>
#include<math.h>
#include<map>
#include<set>

#define ll long long
#define sq(a) (a)*(a)
#define endl "\n"
#define pb push_back
#define v vector
#define mp make_pair
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define w() ll t; cin >> t; while(t--)
using namespace std;

ll bottomup(ll n, ll k) {
    ll dp[100] = {0};
    dp[0] = 1;
    for (int j = 1; j <= n; ++j) {
        ll ans = 0;
        dp[j] = 0;
        for (int i = 1; i <= k; i++) {
            if (j - i >= 0) {
                dp[j] += dp[j - i];
            }
        }
    }

    return dp[n];
}

ll topdown(ll n, ll k, ll dp[]) {
    if (n == 0) {
        return 1;
    }
    if (dp[n] != 0) {
        return dp[n];
    }
    ll ans = 0;
    for (int i = 1; i <= k; ++i) {
        if (n - i >= 0) {
            ans += topdown(n - i, k, dp);
        }
    }
    return dp[n] = ans;
}
ll optimised()
int main() {
    // find number of ways to reach nth step if u can jump in k ways
    ll n, k;
    cin >> n >> k;
    ll dp[100] = {0};
    cout << topdown(n, k, dp);

    cout << " - - - - - - - - - - ";

    cout << bottomup(n, k);
    return 0;
}