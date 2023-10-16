//https://codeforces.com/problemset/problem/474/B


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

ll BS(vector<ll> &nums,ll key){
    ll start=0;
    ll end=nums.size()-1;
    while (start<=end)
    {
        ll mid=start+(end-start)/2;
        if(nums[mid]==key){
            return mid+1;
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

    return start+1;
    

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vector<ll> piles;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin>>x;
        piles.push_back(x);
    }

    ll m;
    cin>>m;

    vector<ll> labels;
    for (int i = 0; i < m; i++)
    {
        ll x;
        cin>>x;
        labels.push_back(x);
    }

    ll sum=0;

    //Prefix sum array of piles
    for (int i = 0; i < n; i++)
    {
        piles[i]+=sum;
        sum=piles[i];
    }

    vector<ll> ans;
    for (int i = 0; i < m; i++)
    {
        ll x=BS(piles,labels[i]);

        ans.push_back(x);
        
    }
    
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }
    


    
    
    
    
}