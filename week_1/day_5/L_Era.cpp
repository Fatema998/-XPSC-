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
        ll n;
        cin >> n;
        long long a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll res = 0, x = 0;

        for (ll i = 0; i < n; i++)
        {

            if (a[i] > (i + 1))
            {
                x = abs((i + 1) - a[i]);
                res = max(x, res);
            }
        }
        cout << res << endl;
    }
    return 0;
}