//
// Created by Mrigank Anand on 27/04/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<iostream>
#include<vector>
#include <string>
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

class location {
public:
    string location_name;
    int x, y;

    location(string n, int a, int b) {
        x = a;
        y = b;
        location_name = n;
    }

    int dist() {
        return x * x + y * y;
    }
};

bool compare(location a, location b) {
    int d1 = a.dist();
    int d2 = b.dist();
    if (d1 == d2) {
        return a.location_name.length() < b.location_name.length();
    } else {
        return d1 < d2;
    }
};

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
    cout << d.capacity() << endl;

    d.clear();
    //make the size zero and remove everything
    //does not delete memory
    for (auto y:d) {
        cout << y << endl;
        cout << 0 << endl;
    }
    // does not print zero
    if (d.empty()) {
        cout << "empty vector" << endl;
    }
    d.pb(12);
    d.pb(100);
    cout << d.front() << endl;
    cout << d.back() << endl;

    //Reserve
    ll n1;
    cin >> n1;
    v<int> b;
    b.reserve(1000); //reserves 1000 places for this array
    for (int j = 0; j < n1; ++j) {
        ll b1;
        cin >> b1;
        b.pb(b1);
    }
    cout << b.capacity() << endl;

    //doubling is a expensive operation


    v<location> t;
    ll n3;
    cin >> n3;
    for (ll i = 0; i < n3; i++) {
        ll aa = 0, bb = 0;
        string c;
        cin >> aa >> bb >> c;
        location temp(c, aa, bb);
        t.pb(temp);
    }
    sort(t.begin(), t.end(), compare);
    for (auto tt:t) {
        cout << "Location " << tt.location_name << " " << tt.x << " " << tt.y << endl;
    }
    return 0;
}