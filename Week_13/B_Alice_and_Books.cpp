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
        vector<int> a(n), p(n + 1);
        // int pageA=0,pageB=0;

        for (int i = 0; i < n; i++)
        {
            /* code */
            cin >> a[i];
        }
        int pageA = a[n - 1];
        int pageB = *max_element(a.begin(), a.end() - 1);
        int res = pageA + pageB;
        cout << res << endl;
    }

    return 0;
}