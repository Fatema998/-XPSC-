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
//         int x;
//         cin >> x;
//         int b = 0, ans = 0;
//         for (int i = 1; i <= 9; i++)
//         {
//             /* code */
//             b = b * 10 + 1;
//             for (int j = 0; j <= 9; j++)
//             {
//                 /* code */
//                 if (b * i <= x)
//                 {
//                     ans++;
//                 }
//             }

//             cout << ans << endl;
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
        /* code */
        int n;
        cin >> n;
        int b = 0, ans = 0;
        for (int len = 1; len <= 9; len++)
        {
            b = b * 10 + 1;
            for (int m = 1; m <= 9; m++)
                if (b * m <= n)
                    ans++;
        }
        cout << ans << endl;
    }

    return 0;
}