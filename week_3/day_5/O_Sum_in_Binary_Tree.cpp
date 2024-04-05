#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        long long n;
        cin>>n;
        long long sum=0;
        while (n)
        {
            /* code */
            sum+=n;
            n=n/2;
        }
        cout<<sum<<endl;
    }
    
    return 0;
}