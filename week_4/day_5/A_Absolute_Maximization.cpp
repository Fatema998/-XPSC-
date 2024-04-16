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
        int n;
        cin>>n;
        int x=INT_MAX;
        int y=0;
        for (int i = 0; i < n; i++)
        {
            /* code */
            int a;
            cin>>a;
            x&=a;
            y|=a;
        }
        cout<<y-x<<endl;
    }
    
    return 0;
}

