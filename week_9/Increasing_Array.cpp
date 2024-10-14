#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<ll> a(n);
    // ll a[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
    }
    ll total = 0, m = a[0];
    for (ll i = 1; i < n; i++)
    {
        /* code */
        total += max(0LL, m - a[i]);
        m = max(m, a[i]);
    }
    cout << total;
    return 0;
}
