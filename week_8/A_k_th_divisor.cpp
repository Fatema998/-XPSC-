// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n, k;
//     cin >> n;
//     int cnt = 0;

//     for (int i = 2; i * i <= n; i++)
//     {
//         /* code */
//         if (n % i == 0)
//         {

//             cnt = i;
//             if ((n / i) != i)
//             {

//                 cnt = (n / i);
//             }
//         }
//     }
//     cin >> k;
//     if (cnt)
//     {
//         cout << cnt << endl;
//     }
//     else
//     {
//         cout << "-1" << endl;
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

    ll n;
    int k;
    cin >> n >> k;

    vector<ll> divisors;

    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divisors.push_back(i);
            if (i != n / i)
            {
                divisors.push_back(n / i);
            }
        }
    }

    sort(divisors.begin(), divisors.end());

    if (divisors.size() < k)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << divisors[k - 1] << endl;
    }

    return 0;
}
