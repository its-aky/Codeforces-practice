//https://codeforces.com/problemset/problem/1520/D

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){

        ll n;
        cin>>n;

        vector<ll> arr;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin>>x;
            arr.push_back(x);
        }

        ll ans=0;

        map<ll,ll> m;
        for (ll i = 0; i < n; i++)
        {
            if(m.find(arr[i]-i)!=m.end()){//found in map
                ans+=m[arr[i]-i];
                m[arr[i]-i]++;
            }

            else
            {
                m[arr[i]-i]=1;
            }
            
        }

        cout<<ans<<endl;


        
    }
}