#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n, k;
        cin >> n >> k;
        map<int, pair<int, int>> mp;
        for (int i = 0; i < n; i++)
        {
            /* code */
            int x;
            cin >> x;
            if (!mp.count(x))
            {
                mp[x].first = i;
                mp[x].second = i;
            }
            else
            {
                mp[x].second = i;
            }
        }
        while (k--)
        {
            /* code */
            int a,b;
            cin>>a>>b;
            bool ans=false;
            if(!mp.count(a)|| !mp.count(b)|| mp[a].first>mp[b].second)
            {
            cout<<"NO\n";
            
            }
            else{
            
            cout<<"YES"<<'\n';
            }
        }
        
    }

    return 0;
}