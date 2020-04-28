//
// Created by Mrigank Anand on 28/04/20.
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

void binary(int n) {
    if (n > 1) {
        binary(n >> 1);
    }
    printf("%d", n & 1);
}

void binaryrepresentation(int n) {
    int i = 0;
    while (i != n) {
        binary(i);
        printf("\n");
        i++;
    }
}

using namespace std;

int main() {
    boost;
    // | A U B | = |A| + |B| - |A(intersection)B|
    int n;
    cout << "enter a number to check how many numbers are divisible by 2 or 3 :- ";
    cin >> n;
    int a, b, c;
    a = n / 2;
    b = n / 3;
    c = n / 6;

    cout << "numbers divisible by two or three :- " << a + b - c << endl;

    cout << "enter a number to check how many numbers are divisible by 2 or 3 or 5:- ";
    cin >> n;
    // check how many numbers are divisible by 2, 3, 5.
    ll d2 = n / 2;
    ll d3 = n / 3;
    ll d5 = n / 5;
    ll d23 = n / 6;
    ll d25 = n / 10;
    ll d35 = n / 15;
    ll d235 = n / 30;
    cout << "numbers divisible by two or three or five:- " << d2 + d3 + d5 - d23 - d25 - d35 + d235 << endl;


    int primes[] = {2, 3, 5, 7, 11, 13, 17, 19};
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll subsets = (1 << 8) - 1;
        ll ans = 0;
        for (ll i = 1; i <= subsets; i++) {
            ll denom = 1ll;
            ll sb = __builtin_popcount(i);
            for (ll j = 0; j <= 7; j++) {
                if (i & (1 << j)) {
                    denom = denom * primes[j];
                }
            }
            if (sb & 1) {
                ans += n / denom;
            } else {
                ans -= n / denom;
            }
        }
        cout << ans << endl;
    }


    return 0;
}