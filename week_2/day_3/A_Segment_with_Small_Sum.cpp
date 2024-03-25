#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
    }

    int l = 0, r = 0;
    long long sum = 0;
    int ans = 0;
    while (r < n)
    {
        /* code */
        sum += a[r];
        if (sum <= s)
        {

            ans = max(ans, r - l + 1);
        }
        else
        {

            sum -= a[l];
            l++;
            r++;
        }
        r++;
    }
    cout << ans << " ";
    return 0;
}