//
// Created by Mrigank Anand on 05/05/20.
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
        string s;
        cin >> s;
        int n = s.length();
       reverse(s.begin(), s.end());
       cout << s;
        cout << endl;
    }
    return 0;
}