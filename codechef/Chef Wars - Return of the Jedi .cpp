//
// Created by Mrigank Anand on 09/08/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<bits/stdc++.h>
#include <iostream>
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
    ll t;
    cin >> t;
    while (t--) {
        ll h, p;
        cin >> h >> p;
        while (p > 0) {
            h = h - p;
            p = p / 2;
        }
        if (h > p) {
            cout << 0 << endl;
        } else{
            cout << 1 << endl;
        }
    }
    return 0;
}