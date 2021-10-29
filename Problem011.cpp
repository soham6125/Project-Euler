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
    while(tc--)
    {
        vector <vector<int>> grid(20,vector<int>(20));
        long long int max=0;
        for(int grid_i = 0;grid_i < 20;grid_i++)
        {
            for(int grid_j = 0;grid_j < 20;grid_j++)
            {
                cin >> grid[grid_i][grid_j];
            }
        }
        for(int i=0;i<20;++i)
        {
            for(int j=0;j<20;++j)
            {
                if(i<17)
                {
                    if(grid[i][j]*grid[i+1][j]*grid[i+2][j]*grid[i+3][j]>max)
                        max=grid[i][j]*grid[i+1][j]*grid[i+2][j]*grid[i+3][j];
                }
                if(j<17)
                {
                    if(grid[i][j+1]*grid[i][j+2]*grid[i][j+3]*grid[i][j]>max)
                             max=grid[i][j+1]*grid[i][j+2]*grid[i][j+3]*grid[i][j];
                }
                if(i<17 and j<17)
                {
                    if(grid[i][j]*grid[i+1][j+1]*grid[i+2][j+2]*grid[i+3][j+3]>max)
                        max=grid[i][j]*grid[i+1][j+1]*grid[i+2][j+2]*grid[i+3][j+3];
                }
                if(i>2 and j<17)
                {
                    if(grid[i][j]*grid[i-1][j+1]*grid[i-2][j+2]*grid[i-3][j+3]>max)
                        max=grid[i][j]*grid[i-1][j+1]*grid[i-2][j+2]*grid[i-3][j+3];
                }
            }
        }
        cout << max;
    }   

cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
return 0;
}
