#include <bits/stdc++.h>
#define ll long long
using namespace std;
int ans = 0;
vector<int> a;
void setr(int l1, int r1, int l2, int r2)
{
    int mxL = 0;
    for (int i = l1; i <= r1; i++)
    {
        /* code */
        mxL = max(mxL, a[i]);
    }
    int mnR = INT_MAX;
    for (int i = l2; i <= r2; i++)
    {
        /* code */
        mnR = min(mnR, a[i]);
    }
    if (mxL > mnR)
    {
        int R = l2;
        for (int i = l1; i <= r1; i++)
        {
            /* code */
            swap(a[i], a[R]);
            R++;
        }
        ans++;
    }
    if (l1 == r1)
    {
        return;
    }
    int mid1 = (l1 + r1) / 2;
    int mid2 = (l2 + r2) / 2;
    setr(l1, mid1, mid1 + 1, r1);
    setr(l2, mid2, mid2 + 1, r2);
}

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
        a.resize(n + 1);
        for (int i = 1; i <= n; i++)
        {
            /* code */
            cin >> a[i];
        }
        ans = 0;
        if (is_sorted(a.begin() + 1, a.begin() + n + 1))
        {
            cout << "0" << endl;
            continue;
        }
        int mid = (n + 1) / 2;
        setr(1, mid, mid + 1, n);
        if (is_sorted(a.begin() + 1, a.begin() + n + 1))
        {
            cout << ans << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}