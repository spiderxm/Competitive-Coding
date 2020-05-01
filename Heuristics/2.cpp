//
// Created by Mrigank Anand on 30/04/20.
//
//april heuristics


#include<iostream>
#include <math.h>
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
    boost;
    w() {
        ll n, k;
        cin >> n >> k;
        int a[k];
        for (int j = 0; j < k; ++j) {
            a[j] = 0;
        }
//        for (int l = 0; l < k; ++l) {
//            cout << a[l];
//
//        }
        while (n--) {
            string b;
            cin >> b;
            ll d = b.length();
            string c = "1";
            for (int i = 0; i < d; i++) {
                if (b[i] == c[0]) {
                    a[i + k - d] = 1;
                }
            }
        }
        for (int l = 0; l < k; ++l) {
            cout << a[l] ;
        }
        cout << endl;


    }
    return 0;
}
