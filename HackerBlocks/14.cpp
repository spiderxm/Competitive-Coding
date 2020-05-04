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

int main() {
    ll dp[93] = {0};
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= 92; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        cout << dp[n+2];
    }
    return 0;
}