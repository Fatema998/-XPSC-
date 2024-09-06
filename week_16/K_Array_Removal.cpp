

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

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int flag = 1;
        int temp = 0;

        for (int j = 0; j < 31; j++)
        {
            flag = 1;
            for (int i = 0; i < n; i++)
            {
                if (a[i] & (1 << j))
                {
                    flag = 0;
                    break;
                }
            }
            if (flag)
            {
                temp = (1 << j);
                break;
            }
        }

        int ans = 0;
        if (temp)
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] > temp)
                {
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
