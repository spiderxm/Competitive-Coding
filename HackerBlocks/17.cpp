//
// Created by Mrigank Anand on 02/09/20.
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
    int n;
    cin >> n;
    vector<int> b, c;
    for (int i = 0; i < n; ++i) {
        int y;
        cin >> y;
        if (y % 2 == 0) {
            b.push_back(y);
        } else
            c.push_back(y);
    }
    for (auto e :c) {
        cout << e << " ";
    }
    for (auto e:b) {
        cout << e << " ";
    }
    return 0;
}