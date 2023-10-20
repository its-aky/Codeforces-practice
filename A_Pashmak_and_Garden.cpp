//https://codeforces.com/problemset/problem/459/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;

    ll side=0;

    if(x1==x2){//vertical line
        side=abs(y2-y1);
        cout<<x1+side<<" "<<y1<<" "<<x2+side<<" "<<y2;
    }

    else if (y1==y2)//horizontal line
    {
        side=abs(x2-x1);
        cout<<x1<<" "<<y1+side<<" "<<x2<<" "<<y2+side;
        
    }

    else
    {
        if (abs(x2-x1)==abs(y2-y1))
        {
            side=(y2-y1);
            cout<<x1<<" "<<y1+side<<" "<<x2<<" "<<y2-side;
            
        }
        else
        {
            cout<<-1<<endl;
        }
        
        
    }
    
    


    
}