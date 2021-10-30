#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lb endl
#define mod 1000000007

ll fact(ll n)
{
    if(n <= 1) return 1;
    return fact(n - 1) * n;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n; cin >> n;
        n--;
        vector<char> alpha = {'a', 'b', 'c', 'd','e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};
        string ans = "";
        for (int i = 12; i >= 0; --i)
        {
            ll factorial = fact(i);
            ll x = (n) / factorial;
            ans += alpha[x];
            n -= factorial * x;
            alpha.erase(alpha.begin() + x);
        }
        cout << ans << endl;
    }
    return 0;
}
