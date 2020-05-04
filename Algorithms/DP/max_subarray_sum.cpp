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

ll maxSum(ll a[], ll n) {
    ll maxx = 0;  // will have max subarray sum
    ll max = 0;   // will be used to store current sum
    // space optimised solution
    for (int i = 0; i < n; i++) {
        max = max + a[i];
        if (max < 0)
            max = 0;
        if (maxx < max)
            maxx = max;
    }
    return maxx;
}

int main() {
    // maximum subarray sum
    ll a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    ll n = sizeof(a) / sizeof(a[0]);
    cout << maxSum(a, n);
    return 0;
}