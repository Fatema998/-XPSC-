
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc;
    cin >> tc;

    while (tc--)
    {
        map<ll, ll> mp;
        ll n, mx = 0;

        cin >> n;
        vector<ll> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            mp[a[i]] = i;
        }
        for (auto x : mp)
        {
            for (auto k : mp)
            {
                if (__gcd(k.first, x.first) == 1)
                {
                    mx = max(mx, (k.second + x.second));
                }
            }
        }

        if (mx)
        {
            cout << mx << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}
