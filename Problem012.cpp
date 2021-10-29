#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int number_of_div(int n){
    int cnt=0; 
    for (int i=1;i<=sqrt(n);i++){ 
        if(n%i==0){ 
            if(n/i==i) 
                cnt++; 
            else  
                cnt+=2; 
        } 
    } 
    return cnt; 
}

int pascal_number(int i){
    return (i*(i+1))/2;
}

int main() 
{
    int t; cin>>t;
    vector<int> number_of_factors;
    vector<int> pascal_numbers;
    int count=0, i=0;
    while(count<=192)
    {
        count=number_of_div(pascal_number(++i));
        number_of_factors.push_back(count);
        pascal_numbers.push_back(pascal_number(i));
    }
    while(t--)
    {
        int n; cin>>n;
        int number;
        if(n<=192){
            int iter=0;
            while(number_of_factors[iter]<=n){
                iter++;
            }
            number=pascal_number(iter+1);
        }else if(n>192 && n<=239){
            number=2031120;
        }else if(n>239 && n<=319){
            number=2162160;
        }else if(n>319 && n<=479){
            number=17907120;
        }else if(n>479 && n<=575){
            number=76576500;
        }else if(n>575 && n<=647){
            number=103672800;
        }else if(n>647 && n<=767){
            number=236215980;
        }else if(n>767 && n<=1000){
            number=842161320;
        }
        cout<<number<<endl;
    }
    return 0;
}
