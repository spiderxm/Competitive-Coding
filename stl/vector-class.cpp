//
// Created by Mrigank Anand on 27/04/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<iostream>
#include "Vector.h"

#define ll long long
#define sq(a) (a)*(a)
#define endl "\n"
#define pb push_back
#define v vector
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;


int main() {
    Vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.pop_back();
    cout << v.capacity() << endl;
    cout << v.front() << endl;
    cout << v.back() << endl;
    cout << v.at(2) << endl;
    cout << v.size() << endl;
    for (ll i = 0; i < v.size(); i++) {
        cout << v.at(i) << endl;
    }
    cout << v.empty()<<endl;
    cout << v.operator[](4);


    return 0;
}