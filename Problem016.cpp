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
using namespace std; 

signed main() 
{ quick; 
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

    int sum[10001];
    int a[10001], c;
    for (int i = 0; i < 10001; ++i) 
    {
        a[i] = -1;
        sum[i] = 0;
    }
    a[10000] = 2;
    sum[0] = 2;
    for (int q = 1; q <= 10000; ++q) {
        int j = 10000;
        c = 0;
        for (; j >= 0; --j) {
            if (a[j] == -1) {
                break;
            }
            a[j] *= 2;
            a[j] += c;
            c = a[j] / 10;
            a[j] = a[j] % 10;
            sum[q] += a[j];
        }
        if (c > 0) {
            sum[q] += c;
            a[j] = c;
        }
    }
    int t;
    cin >> t;
    for (int q = 0; q < t; ++q) {
        int n; cin >> n;
        cout << sum[n - 1] << endl;
    }   
    return 0;

cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
return 0;
}
