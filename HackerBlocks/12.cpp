//
// Created by Mrigank Anand on 30/04/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<iostream>
#include<vector>
#define ll long long

using namespace std;

bool compare(string a, string b) {
    string c = a.append(b);
    string d = a.append(d);
    return c.compare(d) > 0 ? 1 : 0;
}

int myCompare(string X, string Y) {
    // first append Y at the end of X
    string XY = X.append(Y);

    // then append X at the end of Y
    string YX = Y.append(X);

    // Now see which of the two formed numbers is greater
    return YX.compare(XY) < 0 ? 1 : 0;
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<string> a;
        for (int i = 0; i < n; i++) {
            string b;
            cin >> b;
            a.push_back(b);
        }
        sort(a.begin(), a.end(), myCompare);
        for (int j = 0; j < n; ++j) {
            cout << a[j];
        }
        cout << endl;
    }
    return 0;
}