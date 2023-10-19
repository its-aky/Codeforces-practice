//https://codeforces.com/problemset/problem/433/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    
    vector<ll> arr;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin>>x;
        arr.push_back(x);
    }

    ll m;
    cin>>m;

    vector<ll> type,l,r;
    for (ll i = 0; i < m; i++)
    {
        ll x;
        cin>>x;
        type.push_back(x);

        cin>>x;
        l.push_back(x);

        cin>>x;
        r.push_back(x);
        
    }
    

    vector<ll> arr_sorted(arr.begin(),arr.end());
    sort(arr_sorted.begin(),arr_sorted.end());

    vector<ll> ps1;
    vector<ll> ps2;

    ll sum=0;
    for (ll i = 0; i < n; i++)
    {
        sum+=arr[i];
        ps1.push_back(sum);
    }

    sum=0;
    for (ll i = 0; i < n; i++)
    {
        sum+=arr_sorted[i];
        ps2.push_back(sum);
    }

    vector<ll> ans;
    for (ll i = 0; i < m; i++)
    {
        if(type[i]==1){

            ll x;
            x=ps1[r[i]-1]-ps1[l[i]-1]+arr[l[i]-1];
            ans.push_back(x);

        }
        else
        {
            
            ll x;
            x=ps2[r[i]-1]-ps2[l[i]-1]+arr_sorted[l[i]-1];
            ans.push_back(x);
            
        }
        
        
    }
    
    for (ll i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }
    




    


    
}