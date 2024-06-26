#include <bits/stdc++.h>
using namespace std;
#define ll long long

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

        vector<string> a(n);
        map<string, bool> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]] = 1;
        }

        string ans = "";

        for (int i = 0; i < n; i++)
        {
            bool flag = false;
            for (int j = 1; j < a[i].size(); j++)
            {
                string s1 = a[i].substr(0, j), s2 = a[i].substr(j, a[i].size() - j);

                if (mp[s1] == 1 and mp[s2] == 1)
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
                ans += '1';
            else
                ans += '0';
        }

        cout << ans << endl;
    }

    return 0;
}