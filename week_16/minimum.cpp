#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int MaxN = 1e5 + 9, inf = 1e9 + 9;
int a[MaxN], t[MaxN * 4];
void build(int n, int b, int e)
{
    if (b == e)
    {
        t[n] = a[b];
        return;
    }
    int mid = (b + e) / 2, l = (2 * n), r = (2 * n) + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = min(t[l], t[r]);
}
void update(int n, int b, int e, int i, int v)
{
    if (i < b or i > e)
    {

        return;
    }
    if (b == e)
    {
        t[n] = v;
        return;
    }
    int mid = (b + e) / 2, l = (2 * n), r = (2 * n) + 1;
    update(l, b, mid, v, i);
    update(r, mid + 1, e, v, i);
    t[n] = min(t[l], t[r]);
}
int query(int n, int b, int e, int i, int j)
{
    {
        if (i > e or b > j)
            return inf;
    }
    if (b >= i and e <= j)
    {
        return t[n];
    }
    int mid = (b + e) / 2, l = (2 * n), r = (2 * n) + 1;
    query(l, b, mid, i, j);
    query(r, mid + 1, e, i, j);
    return t[n] = min(t[l], t[r]);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i <= n; i++)
    {
        /* code */
        cin >> a[i];
    }
    build(1, 1, n);
    while (m--)
    {
        /* code */
        int t;
        cin >> t;
        if (t == 1)
        {
            int idx, v;
            cin >> idx >> v;
            idx++;
            update(1, 1, n, idx, v);
        }
        else
        {
            int l, r;
            cin >> l >> r;
            l++;
            cout << query(1, 1, n, l, r) << endl;
        }
        }

    return 0;
}