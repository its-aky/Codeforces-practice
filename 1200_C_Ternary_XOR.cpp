//https://codeforces.com/problemset/problem/1328/C
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
// #define PRINT_VECTOR(vec) do { \
    for (const auto& element : vec) { \
        std::cout << element; \
    } \
    std::cout << std::endl; \
} while (0)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string ip;
        cin>>ip;

        string ans1;
        string ans2;

        bool flag=false;
        for (ll i = 0; i < n; i++)
        {
            if(ip[i]=='0'){
                ans1.push_back('0');
                ans2.push_back('0');
            }

            if(ip[i]=='1'){
                if(!flag){
                    ans1.push_back('1');
                    ans2.push_back('0');
                    flag=true;
                }

                else{
                    ans2.push_back('1');
                    ans1.push_back('0');
                }

            }

            if(ip[i]=='2'){
                if(flag){
                    ans2.push_back('2');
                    ans1.push_back('0');
                }
                else
                {
                    ans1.push_back('1');
                    ans2.push_back('1');
                }
                
                
            }   
        }

        for (ll i = 0; i <n; i++)
        {
            cout<<ans1[i];
        }
        cout<<endl;

        for (ll i = 0; i <n; i++)
        {
            cout<<ans2[i];
        }
        cout<<endl;
        
       
        
        
    }
}