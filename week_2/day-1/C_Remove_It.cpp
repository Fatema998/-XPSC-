// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     long long t, n;
//     cin >> t >> n;

//     vector<long long> a(n);

//     for (long long i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         if (a[i] == t)
//         {
//             a.erase(a.begin() + i);
//             i--;
//             n--;
//         }
//     }

//     for (long long i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
    }
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (a[i] != x)
        {

            b.push_back(a[i]);
        }
    }
    for (int i = 0; i < b.size(); i++)
    {
        /* code */
        cout << b[i];
        if (i < b.size() - 1)
        {
            cout << " ";
        }
    }

    return 0;
}
