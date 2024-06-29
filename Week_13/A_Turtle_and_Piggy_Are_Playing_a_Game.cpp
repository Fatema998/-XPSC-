// #include <bits/stdc++.h>
// #define ll long long
// #define endl '\n'
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// using namespace std;

// template <typename T>
// using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         /* code */
//         int l, r;
//         cin >> l >> r;
//         int val = 0;
//         for (int i = 1; i < r; i * 2)
//         {
//             /* code */
//             val++;
//         }
//         cout << val - 1 << endl;
//     }

//     return 0;
// }
// #include <bits/stdc++.h>
// #define ll long long
// #define endl '\n'
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// using namespace std;

// template <typename T>
// using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int l, r;
//         cin >> l >> r;
//         int max_val = r;
//         int score = 0;
//         while (max_val % 2 == 0)
//         {
//             max_val /= 2;
//             score++;
//         }
//         cout << score << endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int l, r;
        cin >> l >> r;

        int score = 0;
        while (r > 0)
        {
            r /= 2;
            score++;
        }

        cout << score - 1 << endl;
    }

    return 0;
}
