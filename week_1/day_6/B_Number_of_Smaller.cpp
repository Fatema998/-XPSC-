#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        /* code */
        cin >> b[i];
    }
    int l = 0, r = 0, ans = 0;
    while (r < m)
    {
        /* code */
        while (b[r] > a[l] and l < n)
        {
            /* code */
            ans++;
            l++;
        }
        r++;
        cout << ans << " ";
    }

    return 0;
}