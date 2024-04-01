#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n;
        cin>>n;
        vector<long long>a(n);
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin>>a[i];
        }
        long long ans=0;
        priority_queue<long long>q;
        for (int i = 0; i < n; i++)
        {
            /* code */
            if(a[i]==0){
            if(q.empty())
            continue;
            ans+=q.top();
            q.pop();
            }
            else{
            
            q.push(a[i]);
            }
        }
        
        cout<<ans<<endl;
    }
    
    return 0;
}