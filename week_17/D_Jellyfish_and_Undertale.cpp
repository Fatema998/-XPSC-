// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         /* code */
//         int a, b, n;
//         cin >> a >> b >> n;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++)
//         {
//             /* code */
//             cin >> a[i];
//         }
//         ll ans = b;
//         for (auto x : a)
//         {
//             ans += min(1ll + x, a * 1ll) - 1;
//         }
//         cout << ans << endl;
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
        int A, B, n;
        cin >> A >> B >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans = B;
        for (auto x : a)
        {
            ans += min(1ll + x, (ll)A) - 1;
        }
        cout << ans << endl;
    }

    return 0;
}
