// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n, k;
//     cin >> n >> k;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         cin >> a[i];
//     }
//     int l = 0, r = 0;
//     ll sum = 0, ans = 0;
//     while (r < n)
//     {
//         /* code */
//         sum += a[r];
//         if ((r - 1 + 1) == k)
//         {
//             ans = max(ans, sum);
//             sum -= a[l];
//             l++;
//             r++;
//         }
//         else
//         {
//             r++;
//         }
//     }
//     cout << ans << endl;

//     return 0;
// }
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    ll x;
    cin >> n >> x;
    vector<pair<ll, int>> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < n - 2; i++)
    {
        int left = i + 1, right = n - 1;

        while (left < right)
        {
            ll sum = a[i].first + a[left].first + a[right].first;

            if (sum == x)
            {
                cout << a[i].second << " " << a[left].second << " " << a[right].second << endl;
                return 0;
            }
            else if (sum < x)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}
