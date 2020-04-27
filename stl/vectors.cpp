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
#define p pair
#define mp make_pair

#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    v<p<int, int>> a;
    ll i;
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++) {
        ll aa = 0, bb = 0;
        cin >> aa >> bb;
        a.pb(mp(aa, bb));
    }
    sort(a.begin(), a.end()); // sorts the pair of vectors
    // we can also provide a comparator function
    for (auto p:a) {
        cout << p.first << " " << p.second << endl;
    }


    v<int> d{1, 2, 3, 4, 10, 12};

    d.pb(16);
    //O(1)
    for (auto y:d) {
        cout << y << endl;
    }

    d.pop_back();
    //O(1)

    //insert some elements in the middle

    d.insert(d.begin() + 3, 1000);
    // specify the location and the value
    d.insert(d.begin() + 3, 4, 10);

    d.erase(d.begin() + 4);
    for (auto y:d) {
        cout << y << endl;
    }

    d.erase(d.begin() + 2, d.begin() + 4);

    for (auto y:d) {
        cout << y << endl;
    }

    cout << d.size() << endl;
    cout << d.capacity();


    return 0;
}