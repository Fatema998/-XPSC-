#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 10;
    ll t;
    cin >> t;

    while (t--)
    {
        vector<string> m(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> m[i];
        }

        ll total = 0;
        for (ll r = 0; r < n; r++)
        {
            for (ll c = 0; c < n; c++)
            {
                if (m[r][c] == '.')
                {
                    continue;
                }

                ll x_rw = min(r, n - 1 - r);
                ll x_cw = min(c, n - 1 - c);
                ll scr = 1 + min(x_rw, x_cw);
                total += scr;
            }
        }

        cout << total << endl;
    }

    return 0;
}
