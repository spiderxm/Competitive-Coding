//
// Created by Mrigank Anand on 28/04/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<iostream>
#include<vector>

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

ll factorial(ll a) {
    if (a == 0)
        return 1;
    return a * factorial(a - 1);
}

ll combinations(ll n, ll k) {
    ll ans = factorial(n);
    ans = ans / factorial(n - k);
    ans = ans / factorial(k);
    return ans;
}

using namespace std;

int main() {
    // Catalan numbers : 1,1,2,5,14,42
    // Used in counting number of BST's with n nodes
    // no. of distinct binary search trees is n! * catalan(n)
    ll n;
    cin >> n;
    // formula = 2nCn / (n+1)

    cout << "Different binary search tree shapes : " << combinations(2 * n, n) / (n + 1) << endl;
    cout << "Distinct BST's are : " << (factorial(n) * combinations(2 * n, n)) / (n + 1);
    // There are many applications of Catalan numbers

    return 0;
}
