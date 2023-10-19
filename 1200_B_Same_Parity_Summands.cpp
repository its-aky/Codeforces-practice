//https://codeforces.com/problemset/problem/1352/B

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

        ll n, k;
        cin >> n >> k;

        bool flag_even, flag_odd;

        vector<ll> ans;

        // Checking for even parity
        ll temp = (k - 1) * 2;
        if (n - temp > 0 && (n - temp) % 2 == 0)
        {
            flag_even = true;
        }
        else
        {
            flag_even = false;
        }

        if (flag_even)
        {
            ans.push_back(n - temp);

            for (ll i = 0; i < k - 1; i++)
            {
                ans.push_back(2);
            }
        }

        if (!flag_even)
        {
            // Checking for odd parity
            temp = k - 1;
            if (n - temp > 0 && (n - temp) % 2 != 0)
            {
                flag_odd = true;
            }
            else
            {
                flag_odd = false;
            }

            if (flag_odd)
            {
                ans.push_back(n - temp);

                for (ll i = 0; i < k - 1; i++)
                {
                    ans.push_back(1);
                }
            }
        }

        if (flag_even || flag_odd)
        {
            cout << "YES" << endl;
            for (ll i = 0; i < ans.size(); i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
            
        }

        else
        {
            cout << "NO" << endl;
        }
    }
}