//https://codeforces.com/problemset/problem/492/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n,l;
    cin>>n>>l;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());

    double last=l-v[n-1];//this will handle the distance from last lantern to home


    double initial;//this will handle the distance from starting point to first lantern
    if(v[0]==0){
        initial=0;
    }
    else
    {
        initial=v[0];
    }

    
    for (int i = 0; i < n-1; i++)
    {
        int j=i+1;
        double calc=(v[j]-v[i])/2.0;

        initial=max(initial,calc);
    }

    cout<<setprecision(9)<<max(initial,last)<<endl;
    
    

    
}