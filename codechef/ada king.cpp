//
// Created by Mrigank Anand on 06/07/20.
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

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll k;
        cin >> k;
        ll r = 8;
        ll c = 8;
        k--;
        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                if (i == j && i == 0) {
                    cout << "O";
                } else {
                    if (k) {
                        cout << ".";
                        k--;
                    } else {
                        cout << "X";
                    }
                }
            }
            cout << endl;
        }

    }
    return 0;
}