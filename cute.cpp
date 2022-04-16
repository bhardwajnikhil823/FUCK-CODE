#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        ll b=0,c=0,d=0;
        for(ll i=0;i<n;i++)
        {
            cin >> a[i];
            if(a[i]==1){b++;}
            if(a[i]==2){c++;}
        }
        if(b==0 && c==0)
        {
            cout << 0 << endl;
        }
        else if(c==0)
        {
            cout << n*b - b*(b+1)/2 << endl;
        }
        else if(b==0)
        {
            cout << c*(c-1)/2 << endl;
        }
        else
        {
            cout << n*b - b*(b+1)/2 + c*(c-1)/2 << endl;
        }
    }
}
