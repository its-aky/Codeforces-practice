//https://codeforces.com/problemset/problem/1343/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> arr;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            arr.push_back(x);
        }

        bool last_sign; // true for positive and false for negative
        if (arr[0] > 0)
        {
            last_sign = true;
        }
        else
        {
            last_sign = false;
        }

        ll temp = INT_MIN, ans = 0;

        for (ll i = 0; i < n; i++)
        {
            bool curr_sign;
            if (arr[i] > 0)
            {
                curr_sign = true;
            }
            else
            {
                curr_sign = false;
            }

            if (last_sign==curr_sign)
            {
                temp=max(temp,arr[i]);

            }
            else
            {
                ans+=temp;
                temp = INT_MIN;
                temp=max(temp,arr[i]);

            }

            last_sign=curr_sign;
        }

        ans+=temp;

        cout<<ans<<endl;
    }
}