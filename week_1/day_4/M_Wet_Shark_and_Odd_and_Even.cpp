#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a[n];
    long long sum=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%2==0)
    cout<<sum<<endl;
    else{
    
    
    sort(a,a+n);
    int frist_odd=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if(a[i]%2==1)
        {
        frist_odd=a[i];
        break;
        
        }
    }
    
    sum -=frist_odd;
    cout<<sum<<endl;
    
    }
    return 0;
}













