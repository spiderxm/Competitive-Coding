//
// Created by Mrigank Anand on 28/04/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<iostream>
#include<vector>
#include <math.h>

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
    // nCk : to  select k items from n posiible items
    // nCk = n! / (n-k)! * (k) !
    // nCk = nC(n-k) sometimes otherway round is easy
    // c(n, 0) = c(n, n) = 1
    // nCk = n-1Ck-1 + n-1Ck

    ll n;
    cin >> n;
    ll a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == i || j == 0) {
                a[i][j] = 1;
            } else {
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            }
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}