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
    /*
     * Square root decomposition
     * Query optimisation
     * reduce time complexity by sqrt(n)
     * divide array in blocks of sqrt(n)
     * compute some needed answer for every block (pre processing)
     * Query L to R, combine answers for the blocks [ L, R ]
     * Update in O(1) time
     */
    ll a[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0, 0};
    ll b[4];
    for (int i = 0; i <= sqrt(12); i++) {
        b[i] = a[int(sqrt(12)) * i] + a[int(sqrt(12)) * i + 1] + a[int(sqrt(12)) * i + 2];
    }
    for(auto y:b){
        cout << y << " ";
    }



    return 0;
}