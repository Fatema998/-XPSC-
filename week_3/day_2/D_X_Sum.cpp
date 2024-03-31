#include <bits/stdc++.h>
using namespace std;

const int max_ = 1005;
int a[max_][max_];

long long matrx(int x, int y, int n, int m)
{
    long long res = 0;
    int idx = 0;
    while (x - idx >= 0 && y - idx >= 0)
    {
        res += a[x - idx][y - idx];
        idx++;
    }
    idx = 0;
    while (x - idx >= 0 && y + idx < m)
    {
        res += a[x - idx][y + idx];
        idx++;
    }
    idx = 0;
    while (x + idx < n && y + idx < m)
    {
        res += a[x + idx][y + idx];
        idx++;
    }
    idx = 0;
    while (x + idx < n && y - idx >= 0)
    {
        res += a[x + idx][y - idx];
        idx++;
    }
    return res - 3 * a[x][y];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                ans = max(ans, matrx(i, j, n, m));
            }
        }
        cout << ans << endl;
    }
    return 0;
}
