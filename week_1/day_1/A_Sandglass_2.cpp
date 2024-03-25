#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,t;
    cin>>x>>t;
    long long min_rem=max(0LL,x-t);
    cout<<min_rem<<endl;
    return 0;
}