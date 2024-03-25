
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,t;
    cin>>a>>b>>t;
    int cnt=0;
    for (int i = a; i <= t+0.5; i+=a)
    {
        /* code */
        cnt+=b;
    }
    cout<<cnt<<endl;
    return 0;
}
