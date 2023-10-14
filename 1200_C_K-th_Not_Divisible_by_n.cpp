//https://codeforces.com/problemset/problem/1352/C

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
        ll x=k/(n-1);//n-1 buckets of numbers will be formed
        //(n-1)*x<=k so to find maximum x, we do x=k/(n-1)

        /*

        Buckets are formed like this:

        1,2,3,4,5,.............n-1      n
        n+1,n+2,...............2n-1     2n
        2n+1,2n+2,.............3n-1     3n
        .
        .
        .
        .
        .


        */

        ll rem=k-x*(n-1);//calculates  the remaining numbers to reach k


        if(!rem){
            cout<<n*x-1<<endl;//if rem==0,see bucket 3n-1(example) is written as x*n-1 in the code
        }

        else
        {
            cout<<n*x+rem<<endl;//n*x will return the last element (see bucket) that was there and adding rem will give answer
        }

    }
}