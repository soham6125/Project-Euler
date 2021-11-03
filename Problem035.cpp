#include <bits/stdc++.h>
#define ll               long long int 
#define loop(a,b,i)      for(long long int i=a;i<b;i++)
#define loopr(a,b,i)     for(long long int i=a;i>=b;i--)
#define cn               continue;
#define pb               push_back
#define db               double
#define mp               make_pair
#define sz(x)            (ll)((x).size())
#define endl             "\n"
#define lb               lower_bound
#define ub               upper_bound
#define f                first
#define se               second
#define vll              vector<ll>
#define pll              pair<ll,ll>
#define vpll             vector< pair<ll,ll> >
#define all(x)           x.begin(),x.end()
#define pi               3.14159265358979323846
#define quick            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const ll mod = 1e9 + 7;
const ll MAX  = 8000000000000000064LL;
const ll MIN  = -8000000000000000064LL;
ll add(ll x, ll y) {ll res = x + y; return (res >= mod ? res - mod : res);}
ll mul(ll x, ll y) {ll res = x * y; return (res >= mod ? res % mod : res);}
ll sub(ll x, ll y) {ll res = x - y; return (res < 0 ? res + mod : res);}
ll power(ll x, ll y) {ll res = 1; x %= mod; while (y) {if (y & 1)res = mul(res, x); y >>= 1; x = mul(x, x);} return res;}
ll mod_inv(ll x) {return power(x, mod - 2);}
ll gcd(ll a,ll b) {if(b==0)return a; return gcd(b,a%b);}
ll lcm(ll x, ll y) { ll res = x / gcd(x, y); return (res * y);}
// ll nCr(ll n,ll r){ll ans=fact[n]; ans*=mod_inv(fact[n-r]);ans%=mod; ans*=mod_inv(fact[r]);ans%=mod; return ans;}
using namespace std; 

const ll dx[] = {-1,1,0,0,1,1,-1,-1};
const ll dy[] = {0,0,1,-1,-1,1,-1,1};

const int N = 1e6;
bool prime[N+1];
vll v;
map<string,ll> m;

void init()
{
    memset(prime,true,sizeof(prime));
    prime[0] = false;
    prime[1] = false;
    for(ll p = 2; p * p <= N; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= N; i += p)
                prime[i] = false;
        }
    }
    loop(2,N+1,i)
    {
        if(prime[i]) m[to_string(i)]++;
    }
}

string left(string s)
{
    char x = s[0];
    s = s.substr(1) + x;
    return s;
}

signed main() 
{ quick; 
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

    init();
    vll pref(N+1,0);
    loop(1, N+1, i)
    {
        bool ok = true;
        ll x = i;
        string s = to_string(x);
        loop(0, sz(s), j)
        {
            ok &= (m.find(s) != m.end());
            s = left(s);
        }
        if(ok) pref[i] = pref[i-1] + i;
        else pref[i] = pref[i-1];
    }
    int tc = 1;
    // cin >> tc; 
    loop(0,tc,Q)
    {   
        // cout << "Case #" << Q+1 << ": ";
        ll n; cin >> n;
        cout << pref[n-1];
    }

cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
return 0;
}
