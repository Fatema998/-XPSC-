


#include<bits/stdc++.h>
using namespace std;

long long find_max(long long x,long long y)
{

long long curnt=x;
long long  cnt=1;
while (curnt*2<=y)
{
    /* code */
    curnt *=2;
    cnt++;
}
return cnt;
}

int main()
{
    long long x,y;
    cin>>x>>y;
    cout<<find_max(x,y)<<endl;   
    return 0;
}
