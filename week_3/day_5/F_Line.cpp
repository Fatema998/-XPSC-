#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        /* code */

        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll total = 0;
        vector<ll> a;
        for (ll i = 0; i < n; i++)
        {
            /* code */
            if (s[i] == 'L')
            {
                total += i;
                ll diffr = (n - 1 - i) - i;
                a.push_back(diffr);
            }
            else
            {

                total += n - 1 - i;
                ll diffr = i - (n - 1 - i);
                a.push_back(diffr);
            }
        }
        sort(a.begin(), a.end(), greater<ll>());
        for (ll i = 0; i < n; i++)
        {
            /* code */
            if (a[i] > 0)
            {

                total += a[i];
            }
            cout << total << " ";
        }
        cout << '\n';
    }

    return 0;
}