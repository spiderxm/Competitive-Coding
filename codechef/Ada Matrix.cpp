#include<bits/stdc++.h>

#define ll long long
#define endl "\n"
using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll a[n][n];
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> a[i][j];
            }
        }
        ll count = 1;
        for (int i = 1; i < n; ++i) {
            if (a[0][i] == (i * n + 1)) {
                if (a[0][i] != a[0][i - 1] + n) {
                    count++;
                }
            } else {
                if (a[0][i] != a[0][i - 1] + 1) {
                    count++;
                }
            }
        }
        long long int c = a[0][n - 1];
        if (c == n) {
            count--;
        }
        cout << count << endl;

    }
    return 0;
}