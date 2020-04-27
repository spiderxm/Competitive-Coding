//
// Created by Mrigank Anand on 27/04/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<iostream>
#include<vector>
#include <algorithm>

#define ll long long
#define sq(a) (a)*(a)
#define endl "\n"
#define pb push_back
#define v vector
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    v<int> a;

    ll n;
    cin >> n;
    while (n--) {
        int b;
        cin >> b;
        a.pb(b);
    }
    for (auto c: a) {
        cout << c << endl;
    }

    for (auto o = a.begin(); o != a.end(); o++) {
        cout << *o << endl;
    }

    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << endl;
    }


    sort(a.begin(), a.end());
    for (auto c: a) {
        cout << c << endl;
    }

    for (int x: a) {
        cout << x << endl;
    }
    //int and auto are same in this case

    v<int> b = {1, 2, 3, 4, 5, 6};
    for (int t:b) {
        cout << t << endl;
    }
    b.pb(12); //capacity doubles because we add-on an element

    cout << a.size() << endl;
    cout << a.capacity() << endl;
    cout << a.max_size() << endl; // maximum size vector can occupy

    cout << b.size() << endl;
    cout << b.capacity() << endl;
    cout << b.max_size() << endl; // maximum size vector can occupy



    return 0;
}