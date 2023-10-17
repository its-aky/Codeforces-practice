#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

ll ans=0;
bool BS(vector<ll> &nums,ll key){

    ll start=0;
    ll end=nums.size()-1;

    while (start<=end)
    {
        ll mid=start+(end-start)/2;

        if(nums[mid]==key){
            ans++;
            nums[mid]=-1;
            return true;
        }

        else if (nums[mid]>key)
        {
            end=mid-1;
        }

        else
        {
            start=mid+1;
        }
        
        
    }

    return false;

    

}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ans=0;
    ll n;
    cin>>n;

    vector<ll> boys;
    vector<ll> girls;

    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin>>x;
        boys.push_back(x);
    }

    

    ll m;
    cin>>m;

    for (ll i = 0; i < m; i++)
    {
        ll x;
        cin>>x;
        girls.push_back(x);
    }

    sort(boys.begin(),boys.end());

    // sort(girls.begin(),girls.end());

    for (ll i = n-1; i >= 0; i--)
    {
        sort(girls.begin(),girls.end());
        bool search1=false,search2=false,search3=false; 
        search1=BS(girls,boys[i]+1);
        if (!search1)
        {
            search2=BS(girls,boys[i]);
        }
        if (!search2 && !search1)
        {
            search3=BS(girls,boys[i]-1);
        }
        
    }

    cout<<ans<<endl;
    


    
    
    
}