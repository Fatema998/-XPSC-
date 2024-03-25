#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        /* code */
        cin >> b[i];
    }
    int l = 0, r = 0;
    long long ans = 0;
    while (l<n and r<m)
    {
        /* code */
        int cnt1=0,cnt2=0,curr=a[l];
        while (a[l]==curr and l<n)
        {
            /* code */
            cnt1++;
            
            l++;
        }
        while (curr>b[r] and r<m)
        {
            /* code */
            r++;
        }
        while (b[r]==curr  and r<m)
        {
            /* code */
            cnt2++;
            r++;
        }
        ans+=(cnt1*cnt2);
        
    }
  cout<<ans<<"\n";
    return 0;
}