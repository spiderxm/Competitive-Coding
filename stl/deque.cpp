//
// Created by Mrigank Anand on 28/04/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<iostream>
#include<deque>
#include <algorithm>

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
    deque<int> a;
    // random access is avaliable
    // should be used for large memory used elements

    a.push_front(12);
    a.push_front(23);
    a.push_front(34);
    a.push_front(45);
    cout << a[1] << endl;
    a.push_back(56);
    a.push_back(67);
    a.push_back(78);
    a.pop_front();
    a.pop_back();
    for (auto u: a) {
        cout << u << endl;
    }
    cout << a.max_size() << endl << a.size() << endl << a.front() << endl << a.back() << endl << a.empty();
    auto it = a.begin() + 3;
    cout << endl;
    cout << a[it - a.begin()];
    a.erase(it);
    a.insert(it, 100);
    cout << endl;
    for (auto u: a) {
        cout << u << endl;
    }
    return 0;
}