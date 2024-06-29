#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n, k;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        cin >> n >> k;
        ll res = 0;
        while (n > 0)
        {
            if (n % k == 0)
            {
                n /= k;
                res++;
            }
            else
            {
                ll rem = n % k;
                res += rem;
                n -= rem;
            }
        }

        cout << res << endl;
    }

        return 0;
}