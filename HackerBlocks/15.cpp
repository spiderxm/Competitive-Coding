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

bool palindrome(string s, ll l, ll r) {
    l--;
    string use = s.substr(l, r);
    ll sizee = use.length();
    if (use[0] == use[sizee - 1]) {
        for (int i = 1; i < sizee - 1; ++i) {
            if (use[i] != use[sizee - i - 1]) {
                cout << "HI";
                break;
            }
        }
        return true;
    } else {
        return false;
    }
}

int main() {
    ll length;
    cin >> length;
    string s;
    cin >> s;
    ll m;
    cin >> m;
    while (m--) {
        ll l, r;
        cin >> l >> r;
        if (palindrome(s, l, r) == true) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}