

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        /* code */
        ll n;
        cin>>n;
        vector<ll>a(n);
        for (ll i = 0; i < n; i++)
        {
            /* code */
            cin>>a[i];
        }
        sort(a.rbegin(),a.rend());
        ll ans=1;
        ll XOR=a[0];
        for (ll i = 1; i < n; i++)
        {
            /* code */
            if(XOR>=a[i])
            {
            XOR=XOR^a[i];
            
            }
            else{
            
            XOR=a[i];
            ans++;
            }
        }
        
        cout<<ans<<endl;
    }
    
    return 0;
}