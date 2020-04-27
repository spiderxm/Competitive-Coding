//
// Created by Mrigank Anand on 27/04/20.
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
//What is the maximum number of people that should be present in a hall so that
// there's 50% chance of two people having the same birthday?

using namespace std;

int main() {

    ll n = 0;
    float x = 1.0;
    float num = 365, den = 365;
    float p;
    cin >> p;
    float ans = 1;
    while (x > 1 - p) {
        ans *= num / den;
        x = ans;
        n++;
        num--;
        cout << "People " << n << " and x " << x << endl;
    }
    cout << "Number of people needed is : " << n << endl;
    return 0;
}