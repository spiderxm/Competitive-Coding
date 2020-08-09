//
// Created by Mrigank Anand on 10/08/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<bits/stdc++.h>

#define ll long long
#define endl "\n"
using namespace std;


int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll r, c;
        cin >> c >> r;
        ll pc = c;
        ll pr = r;
        if (pc > pr) {
            if ((pr / 9) * 9 == pr) {
                cout << 1 << " " << pr / 9;
            } else {
                cout << 1 << " " << pr / 9 + 1;
            }
        } else if (pr > pc) {
            if (pr / 9 > pc / 9) {
                if ((pc / 9) * 9 == pc) {
                    cout << 0 << " " << pc / 9;
                }
                else{
                    cout << 0 << " " << pc / 9 + 1;
                }
            } else {
                if ((pc / 9) * 9 == pc) {
                    cout << 1 << " " << pc / 9;
                }
                else{
                    cout << 1 << " " << pc / 9 + 1;
                }
            }
        } else {
            if ((pc / 9) * 9 == pc) {
                cout << 1 << " " << pr / 9;
            }
            else{
                cout << 1 << " " << pr / 9 + 1;
            }
        }
        cout << endl;
    }
    return 0;
}