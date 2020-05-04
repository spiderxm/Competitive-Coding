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
    // atmost 3 non - zero integers or digits in it
    // 1, 2, 305, 3090 are classy numbers
    ll t;
    cin >> t;
    while (t--) {
        ll l, r;
        cin >> l >> r;
        // find all the classy numbers between l and
        // we use properties of digits in digit dp
        // There are two types of properties of
        // f[l,r] = f[r] - f[l-1]  if f is an cumulative function

        /*
         * consider number as a string for better accuracy
         */

    }

    return 0;
}