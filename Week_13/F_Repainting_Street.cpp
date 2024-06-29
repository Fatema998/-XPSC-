
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
        ll n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin >> a[i];
        }
        ll mx = INT_MAX;
        for (ll i = 1; i < 101; i++)
        {
            /* code */
            ll j = 0;
            ll cnt = 0;
            while (j < n)
            {
                /* code */
                while (a[j] != i and j < n)
                {
                    /* code */
                    // j++;
                    if (j >= n)
                        break;
                    j += k;
                    cnt++;
                }
                j++;
            }
            mx = min(mx, cnt);
        }
        cout << mx << endl;
    }

    return 0;
}