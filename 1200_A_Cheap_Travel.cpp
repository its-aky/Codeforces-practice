//https://codeforces.com/problemset/problem/466/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{

    //imp TC: 10 2 1 1
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m, a, b;
    cin >> n >> m >> a >> b;

    ll cost = 0;

    double per_ride = (b * 1.0) / m;//per ride cost of m tickets must be calculated in decimals for comparison with 1 ticket price

    if (per_ride < a)
    {

        cost += (n / m) * b;

        //the following checks whether it is feasible to buy extra tickets with b rubles or
        //buy same number of tickets with 'a' rubles per tickets
        if (n % m != 0)
        {
            n = n % m;

            if (a >= b)
            {
                cost += b;
            }
            else
            {
                if (n * a >= b)
                {
                    cost += b;
                }

                else
                {
                    cost += n * a;
                }
            }
        }
    }

    else//if 1 ticket price is less than or equal to per ride price of m tickets we would buy n tickets with a cost everytime
    {
        cost += n * a;
    }

    cout << cost << endl;
}