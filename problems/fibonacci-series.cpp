//
// Created by Mrigank Anand on 28/04/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<iostream>
#include<vector>
#define ll long long
#define sq(a) (a)*(a)
#define endl "\n"
#define pb push_back
#define v vector
#define mp make_pair
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
    // f(n) = f(n-1) + f(n-2)
    ll n;
    cin >> n;
    ll a[n];
    a[0] = 0;
    a[1] = 1;
    for (ll i = 2; i < n; i++) {  //O(n)
        a[i] = a[i - 1] + a[i - 2];
    }
    for (ll j: a) {
        cout << j << " ";
    }
    cout << endl;

    return 0;
}

// Zeckendorf's Theorem - Zeckendorf's theorem states that every positive integer can be written uniquely as a sum of distinct non-neighbouring Fibonacci numbers

/*
 * Pisano Period:
 * Last 1/2/3/4 digit(s) of fibonacci no. repeat with period of
 * 60/300/1500/15000 respectively
 */