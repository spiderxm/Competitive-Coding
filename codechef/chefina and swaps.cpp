//
// Created by Mrigank Anand.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<bits/stdc++.h>

using namespace std;
#define f(i, x, n) for (long long  i = x; i < n; i++)
#define endl "\n"
#define ll long long int
const ll inf = LLONG_MAX;

int main() {

    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        map<ll, ll> m;

        ll mini = inf, temp;

        f (i, 0, n) {
            cin >> temp;
            m[temp]++;
            mini = min(mini, temp);
        }

        f (i, 0, n) {
            cin >> temp;
            m[temp]--;
            mini = min(mini, temp);
        }

        vector<ll> a, b;
        int possible = true;
        for (auto x : m) {
            if (x.second % 2) {
                possible = false;
                break;
            }
            if (x.second > 0) {
                f (i, 0, x.second / 2) {
                    a.push_back(x.first);
                }
            }

            if (x.second < 0) {
                f (i, 0, abs(x.second) / 2) {
                    b.push_back(x.first);
                }
            }
        }

        if (!possible or a.size() != b.size()) {
            cout << -1 << endl;
            continue;
        }

        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());
        mini = min(mini, mini);

        ll ans = 0;
        for (ll i = 0, n = a.size(); i < n; i++) {
            ans += min({a[i], b[i], mini * 2});
        }

        cout << ans << endl;
    }

}