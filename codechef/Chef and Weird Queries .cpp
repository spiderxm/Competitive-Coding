//
// Created by Mrigank Anand on 04/05/20.
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

//Problem Code: CK87QUER
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll y;
        cin >> y;
        ll ans = 0;
        for (int i = 1; i <= 700; i++) {
            if (y - i > 0) {
                ll z = int(sqrt(y - i));
                ans +=z;
            }
        }
        cout << ans << endl;
    }
    return 0;
}