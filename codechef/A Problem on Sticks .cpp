//
// Created by Mrigank Anand on 04/09/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<bits/stdc++.h>

#define ll long long
#define endl "\n"
using namespace std;

bool greaterr(int a, int b) {
    return b < a;
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        set<int> b;
        for (int i = 0; i < n; ++i) {
            int c;
            cin >> c;
            b.insert(c);
        }
        ll size = b.size();
        if (b.find(0) != b.end()) {
            size--;
        }
        cout << size << endl;
    }
    return 0;

}