

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
        ll x, y;
        cin >> x >> y;
        if (x < y)
        {
            if (y % 2 == 1)
            {
                ll r = y * y;
                cout << (r - x + 1) << endl;
            }
            else
            {
                ll r = (y - 1) * (y - 1);
                cout << (r + x) << endl;
            }
        }
        else
        {
            if (x % 2 == 0)
            {
                ll r = x * x;
                cout << (r - y + 1) << endl;
            }
            else
            {
                ll r = (x - 1) * (x - 1);
                cout << (r + y) << endl;
            }
        }
    }

    return 0;
}