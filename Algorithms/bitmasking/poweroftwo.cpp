//
// Created by Mrigank Anand on 05/09/20.
//

//
// Created by Mrigank Anand on 05/09/20.
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
    ll n;
    cin >> n;
    ll count = 0;
    while (n) {
        if (n & 1) {
            count++;
        }
        n = n >> 1;
    }
    if(count == 1){
        cout << "true";
    }else{
        cout << "false";
    }
    return 0;
}