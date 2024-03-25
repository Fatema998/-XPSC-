#include <bits/stdc++.h>
using namespace std;
int main()
{
    long  t;
    cin >> t;
    while (t--)
    {
        /* code */
        long n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0;
        for (long i = 0; i < n; i++)
        {
            /* code */
            if (s[i] == ')' and cnt)
                cnt--;
        if(s[i]=='(') cnt++;
        }
        cout<<cnt<<endl;
    }

    return 0;
}