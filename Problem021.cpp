#include<bits/stdc++.h> 
using namespace std; 


int div_Sum(int num) 
{ 
    int result = 0; 
    for (int i=2; i<=sqrt(num); i++) 
    { 
        if (num%i==0) 
        { 
            if (i==(num/i)) 
                result += i; 
            else
                result += (i + num/i); 
        } 
    } 
    return (result + 1); 
} 


int main() 
{ 
        vector<int> v;
        v.push_back(0);
        vector<int> sum;
        sum.push_back(0);
        int num = 100000; 
        for(int i=1;i<=num;i++)
        {
                int t = div_Sum(i);
                sum.push_back(t);
                if(i==div_Sum(sum[i]) && i!=sum[i])
                    v.push_back(i+v[i-1]);
                else
                    v.push_back(v[i-1]);
        }
        int t;
        cin >> t;
        while(t--){
                int k; cin >> k;
                cout << v[k] << endl;
        }

return 0; }
