#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 1; i * i <= n; i++)
    {
        /* code */
        cin >> a[i];
    }
    vector<int> b;
    for (int i = 1; i * i <= n; i++)
    {
        /* code */
        if (n % i == 0)
        {
            b.push_back(i);
            if ((n / i) != i)
            {
                b.push_back(n / i);
            }
        }
    }
    sort(b.begin(), b.end());
    for (auto val : a)
    {
        // if (val == 3)
        // {
        //     cout << "YES" << endl;
        // }
        // else
        // {
        //     cout << "NO" << endl;
        // }
        cout << val << endl;
    }

    return 0;
}