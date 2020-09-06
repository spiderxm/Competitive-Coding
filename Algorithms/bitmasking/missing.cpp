//
// Created by Mrigank Anand on 05/09/20.
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
    ll n;
    cin >> n;
    ll c;
    ll ans = 0, ans1 = 0;
    ll n2 = n;
    while (n--) {
        cin >> c;
        ans = ans ^ c;
    }
    for (ll i = 0; i <= n2; i++) {
        ans1 = ans1 ^ i;
    }
    cout << (ans ^ ans1) << endl;
    return 0;
}