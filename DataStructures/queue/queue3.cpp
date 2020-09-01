//
// Created by Mrigank Anand on 01/09/20.
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
    queue<int> a;
    for (int i = 0; i < 10; ++i) {
        a.push(i * i * i);
    }
    while (!a.empty()){
        cout << a.front() << " ";
        a.pop();
    }
    return 0;
}