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
        ll n;
        cin >> n;
        ll a[n];
        for (ll &x: a) {
            cin >> x;
        }
        ll ans = 0;
        for (int i = 1; i < n; ++i) {
            ans += abs(a[i] - a[i - 1]) ;
            if(a[i] != a[i-1]){
                ans = ans - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}