//https://codeforces.com/problemset/problem/514/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll x;
    cin>>x;

    vector<ll> digits;
    while (x!=0)
    {
        ll digit=x%10;
        digits.push_back(digit);
        x=x/10;
    }

    reverse(digits.begin(),digits.end());

    for (int i = 0; i < digits.size(); i++)
    {
        if (digits[i]>=5)
        {
            digits[i]=9-digits[i];
        }
        
    }

    if(digits[0]==0)digits[0]=9;

    for (int i = 0; i < digits.size(); i++)
    {
        
        cout<<digits[i];
    }
    cout<<endl;
    
    
}