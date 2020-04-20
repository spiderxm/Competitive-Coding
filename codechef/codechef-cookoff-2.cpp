#define ll long long

#include <iostream>
#include <vector>

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

ll power(ll a, ll b) {
    if (b == 0) return 1;
    ll p = power(a, b / 2) % mod;
    if (b & 1) return (a * sq(p)) % mod; else return sq(p) % mod;
}

void test_case();

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