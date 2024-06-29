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
        ll ln = s.length(), pos = -1, cnt = 0;
        for (ll i = ln - 1; i >= 0; i--)
        {
            /* code */
            cnt++;
            if (s[i] == 'R')
            {
                pos = i;
                break;
            }
        }

        ll ans = cnt;
        cnt = 0;
        for (ll i = 0; i <= pos; i++)
        {
            /* code */
            if (s[i] == 'R')
            {
                cnt++;
                ans = max(ans, cnt);
                cnt = 0;
            }
            else
                cnt++;
        }
        if (pos == -1)
            ans++;
        cout << ans << endl;
    }

    return 0;
}