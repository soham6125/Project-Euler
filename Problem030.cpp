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

signed main() 
{ quick; 


    int tc = 1;
    // cin >> tc; 
    loop(0,tc,Q)
    {   
        // cout << "Case #" << Q+1 << ": ";
        // 1148 19316 443839 548834 
        // 153 0 0 0 
        vll v(7,0);
        // loop(10,1000000001,i) {
        //     vll tmp;
        //     ll x = i;
        //     while(x != 0)
        //     {
        //         tmp.pb(x%10);
        //         x /= 10;
        //     }
        //     loop(3,4,exp)
        //     {
        //         ll sum = 0;
        //         for(auto it:tmp) sum += pow(it,exp);
        //         if(sum == i) v[exp] += i;
        //     }
        // }
        v[3] = 1301;
        v[4] = 19316;
        v[5] = 443839;
        v[6] = 548834;
        ll n; cin >> n;
        cout << v[n];
    }

cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
return 0;
}
