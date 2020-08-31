//
// Created by Mrigank Anand on 10/08/20.
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
        string s, p;
        cin >> s >> p;
        map<char, int> b, c;
        for (int k = 97; k <= 122; ++k) {
            b[char(k)] = 0;
        }

        for (int i = 0; i < s.length(); ++i) {
            b[s[i]]++;
        }
        for (int j = 0; j < p.length(); ++j) {
            c[p[j]]++;
        }
        char d = p[0];

        for (auto t:c) {
            b[t.first] -= t.second;
        }
        for (auto t:b) {
            if (t.first == d) {
                while (t.second--) {
                    cout << t.first;
                }
                cout << p;
            } else {
                while (t.second--) {
                    cout << t.first;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
