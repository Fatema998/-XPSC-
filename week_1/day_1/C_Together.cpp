#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    unorder_map<int,int>cnt;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>a[i];
        cnt[a[i]]++;
    }
    int max_cnt=0, most_cnt=0;
    for(auto pair:cnt)
    {
    if(pair.second > max_cnt)
    {
    
    max_cnt=pair.second;
    most_cnt=pair.frist;
    
    }
    }
    most_cnt++;
    int cunt=cnt[most_cnt];
    cout<<cunt<<endl;
    return 0;
}