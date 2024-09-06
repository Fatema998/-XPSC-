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
        int n;
        cin >> n;
        vector<int> a(n);
        int mx = 0;
        for (auto &it : a)
        {
            cin >> it;
            mx = max(mx, it);
        }

        int idx = -1;
        for (int i = 0; i < n; i++)
        {
            /* code */
            if (a[i] != mx)
                continue;
            if (i > 0 and a[i - 1] != mx)
                idx = i + 1;
            if (i < n - 1 and a[i + 1] != mx)
                idx = i + 1;
        }
        cout << idx << endl;
    }

    return 0;
}