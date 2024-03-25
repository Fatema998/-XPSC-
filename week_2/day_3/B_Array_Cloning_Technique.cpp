// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         /* code */
//         int n, x;
//         cin >> n >> x;
//         int res = INT_MIN;
//         map<int, int> m;
//         for (int i = 0; i < n; i++)
//         {
//             /* code */
//             cin >> x;
//             m[x]++;
//             res = max(res, m[x]);
//         }
//         if (res == n)
//             cout << 0 << endl;
//         else
//         {

//             int cnt = 0;
//             while (res < n)
//             {
//                 /* code */
//                 if (res + res >= n)
//                 {
//                     cnt += (n - res);

//                     break;
//                 }
//                 cnt += res;
//                 res = res * 2;
//                 cnt++;
//             }
//             cout << cnt << endl;
//         }
//     }
//     return 0;
// }

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
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
        }

        int max_freq = 0;
        for (auto it : freq)
        {
            max_freq = max(max_freq, it.second);
        }
        int ans = 0;
        while (max_freq < n)
        {
            int rem = n - max_freq;
            int can_add = max_freq;
            ans++;
            ans += min(can_add, rem);
            max_freq += min(can_add, rem);
        }

        cout << ans << '\n';
    }
    return 0;
}
