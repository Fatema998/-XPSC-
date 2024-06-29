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
        int ans = 1e9;
        for (int i = 1; i * i <= n; i++)
        {
            /* code */
            ans = min(ans, i - 1 + ((n - i) + i - 1) / i);
        }
        cout << ans << endl;
    }

    return 0;
}
