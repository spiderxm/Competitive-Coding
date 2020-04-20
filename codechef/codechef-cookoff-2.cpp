#include<bits/stdc++.h>
#define ll long long
#define sq(a) (a*a)
#define mp make_pair
#define tp tuple
#define mt make_tuple
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define ff first
#define ss second
#define mod (1000000007)
#define endl "\n"
#define fastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
void test_case();
ll power(ll x,ll y)
{
    ll res = 1;     // Initialize result

    x = x % mod; // Update x if it is more than or
    // equal to p

    if (x == 0) return 0; // In case x is divisible by p;

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % mod;

        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % mod;
    }
    return res;
}
int main()
{
    fastIO;
    //freopen("i/p.txt","r",stdin);
    //freopen("o/p.txt","w",stdout);
    ll t; cin>>t;
    while(t--) test_case();
    return 0;
}

void test_case()
{
    ll n,a,k,s=0;cin>>n>>a;vector<ll> v;
    for(ll i=1;i<=n;i++){k = power(a,(2*i-1))%mod;v.pb(k);a=(a*k)%mod;}
    for(auto x:v) s+=x;
    cout<<(s%mod)<<endl;
}