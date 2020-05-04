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
#define n() ll n; cin >> n; vector<ll> a;
using namespace std;

int main() {
    w() {
        ll n;
        cin >> n;
        cout << 2 * (pow(2, n / 2) - 1) << endl;
    }
    return 0;
}