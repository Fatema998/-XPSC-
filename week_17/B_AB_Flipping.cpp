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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = n - 1;
        for (int i = 0; i < n; i++)
        {
            /* code */
            if (s[i] == 'B')
            {
                ans--;
            }
            else
            {
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            /* code */
            if (s[i] == 'A')
            {
                ans--;
            }
            else
            {
                break;
            }
        }
        if (ans >= 0)
        {
            cout << ans << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}