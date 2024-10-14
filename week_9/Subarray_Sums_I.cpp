#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        int curnt_sum = 0;
        for (int j = i; j < n; j++)
        {
            curnt_sum += a[j];
            if (curnt_sum == x)
            {
                cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}
