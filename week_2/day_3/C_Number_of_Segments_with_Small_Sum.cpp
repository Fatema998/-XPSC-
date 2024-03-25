#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long s;
    int n; 
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
        if (sum <= s and l < r)
        {

            ans += (r - l + 1);
        }
        else
        {
            while (sum > s)
            {
                /* code */
                sum -= a[l];
                l++;
            }
            if (sum <= s)
            {
                ans += (r - l + 1);
            }
        }
        r++;
    }
    cout << ans << " ";
    return 0;
}