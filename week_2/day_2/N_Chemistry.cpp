#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        map<char,int>mp;
        for (int i = 0; i < n; i++)
        {
            /* code */
            mp[str[i]]++;
        }
        int cnt=0;
        for(auto it:mp)
        {
        if(it.second%2!=0)cnt++;
        
        }
        if(cnt-1<0)cnt=0;
        else cnt=cnt-1;
        if(k>=cnt and k<=n)
        {
        cout<<"YES\n";
        }
        else{
        
        cout<<"NO\n";
        }
    }
    
    return 0;
}