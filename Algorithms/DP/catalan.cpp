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
    // f(n) = submission(f(i-1)*f(N-i))
    ll n;
    ll ans;
    cin >> n;
    ll catalan[n + 1];
    catalan[1] = 1;
    catalan[0] = 1;

    for (int i = 2; i < n; ++i) {
        catalan[i] = 0;
        for (int j = 0; j < i; ++j) {
            catalan[i] += catalan[j] * catalan[i - j - 1];
            cout << 1;
        }
        cout << endl;
    }
    for (int k = 0; k < n; ++k) {
        cout << catalan[k] << " " ;
    }
    return 0;
}