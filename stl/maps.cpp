//
// Created by Mrigank Anand on 29/04/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<iostream>
#include<map>

#define ll long long
#define sq(a) (a)*(a)
#define endl "\n"
#define pb push_back
#define v vector
#define mp make_pair

#include <algorithm>

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

#include <cstring>

int main() {

    // self balancing binary tree is used
    // elements are ordered using their keys
    // insert(), find(), erase;
    map<string, int> a;
    a.insert(make_pair("mango", 12));
    a.insert(make_pair("apple", 20));
    a["banana"] = 20;
    pair<string, int> b;
    b.first = "dragon fruit";
    b.second = 50;
    a.insert(b);
    auto it = a.find("banana");
    if (it != a.end()) {
        cout << "Price of" << "banana is " << a["banana"] << endl;
    } else {
        cout << "not present" << endl;
    }
    if (a.count("mango")) {
        cout << "Price of mango is " << a["mango"] << endl;
    } else {
        cout << "Mango not present" << endl;
    }
    cout << sizeof(a) << endl;

    a["mango"] = 90;
    cout << a["mango"] << endl;
    for (auto it = a.begin(); it != a.end(); it++) {
        cout << it->first<<" cost is " << it->second << endl;
    }
    for(auto t:a){
        cout << t.first<<" cost is " << t.second << endl;
    }
    return 0;
}