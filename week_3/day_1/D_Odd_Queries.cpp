#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<long long> a(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        vector<long long> pref(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            pref[i] = pref[i - 1] + a[i];
        }

        while (q--)
        {
            long long l, r;
            cin >> l >> r;
            long long k;
            cin >> k;
            long long sum = pref[n];
            sum -= (pref[r] - pref[l - 1]);
            sum += ((r - l + 1LL) * k);
            if (sum % 2LL == 1LL)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}