#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        string s;
        cin >> s;
        int zero = 0, one = 0;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            /* code */
            if (s[i] == '1')
                one++;
            else
                zero++;
        }
        int res = min(zero, one);
        if (res == 0 || res % 2 == 0)
        {
            cout << "NET" << endl;
        }
        else
        {
            cout << "DA" << endl;
        }
    }

    return 0;
}