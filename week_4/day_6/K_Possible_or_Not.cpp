#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin >> a[i];
        }
        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            /* code */
            if ((a[i] & k) == k)
            {
                ans &= a[i];
            }
        }

        if (ans == k)
        {
            cout << "YES" << endl;
        }
        else
        {

            cout << "NO" << endl;
        }
    }

    return 0;
}