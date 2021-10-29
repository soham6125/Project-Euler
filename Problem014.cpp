#include <bits/stdc++.h>
#define int               long long int 
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

vector<int> dp(5000005,-1);
vector<int> ans(5000005);

int fun(int n)
{
    int& ans = dp[n];
    if(ans != -1)
        return ans;
    if(n%2 == 0)
        ans=1+fun(n/2);
    else
    { 
        int temp=3*n + 1;
        int cnt=1;
        while(temp > 5000001)
        {
            if(temp % 2 == 0)
                temp/=2;
            else
                temp=3*temp + 1;
            cnt++;
        }
        ans=cnt+fun(temp);
    }
    return ans;
}

signed main()
{
    dp[1] = ans[1] = 1;
    for(int i=2;i<=5000001;i++)
    {
        if(dp[i]==-1)
            dp[i]=fun(i);
        if(dp[i] >= dp[ans[i-1]])
            ans[i]=i;
        else
            ans[i]=ans[i-1];
    }
    int tt;    
    cin >> tt;    
    while(tt--)
    {
        int n; cin>>n;
        cout << ans[n] << endl;
    }
        
    return 0;
}
