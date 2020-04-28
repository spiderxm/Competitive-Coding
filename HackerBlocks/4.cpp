//
// Created by Mrigank Anand on 28/04/20.
//

//
// Created by Mrigank Anand on 28/04/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<iostream>
#include<vector>
#include <algorithm>

#define ll long long
#define sq(a) (a)*(a)
#define endl "\n"
#define pb push_back
#define v vector
#define mp make_pair
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

ll pow(ll a, ll b) {
    ll ans = 1;
    while (b > 0) {
        if (b & 1) {
            ans = ans * a;
        }
        b = b >> 1;
        a = a * a;

    }
    return ans;
}

using namespace std;

int main() {

    ll t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int y = n;
        v<int> a;
        while (n--) {
            ll an;
            cin >> an;
            a.pb(an);
        }
        next_permutation(a.begin(), a.end());
        for(auto r:a){
            cout << r << " ";
        }
        cout << endl;
    }
    return 0;
}