#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
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
    vector<int> c;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i] || a[i] > b[i])
        {
            ans = c.insert(a[i]);
            cout << ans << endl;
        }
        else
        {

            cout << "-1" << endl;
        }

        /* code */
    }

    return 0;
}