#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        cin >> n;

        vector<int> a(n, 0);
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin >> a[i];
        }
        int ans = a[0];
        for (int i = 1; i < n; i++)
        {
            /* code */
            ans = ans & a[i];
        }

        cout << ans << endl;
    }

    return 0;
}