//
// Created by Mrigank Anand on 01/05/20.
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

ll fib(int n, ll dp[]) {
    // Recursion plus memorization
    // Top down approach
    // Space complexity = O(n)
    // Time complexity = O(n) linear time complexity
    if (n == 0 or n == 1)
        return n;
    if (dp[n] != 0) {
        return dp[n];
    }
    int ans;
    ans = fib(n - 1, dp) + fib(n - 2, dp);
    return dp[n] = ans;
}

ll fibbo(ll n) {
    // Space complexity = O(n)
    // Bottom to top approach
    ll dp[100] = {0};
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

ll fibbospace(ll n) {
    // Space Complexity very less
    // Time complexity O(n)
    // Bottom up approach with time optimisation
    if (n == 0 || n == 1) {
        return n;
    }
    ll a = 0;
    ll b = 1;
    ll c;
    for (int i = 2; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    // Those can't remember their past are condemned to repeat it
    // DP is all about remembering about things computing in past
    // We can divide bigger problem into smaller problems

    // TOP DOWN APPROACH
    int n;
    cin >> n;
    ll dp[100] = {0};
//
//    cout << fib(n, dp) << endl;
//    cout << fibbo(n) << endl;
    cout << fibbospace(n) << endl;

    return 0;
}