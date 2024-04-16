#include <bits/stdc++.h>
using namespace std;
#define ll long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        ll n;
        cin >> n;
        ll ans = 1;
        while (ans <= n)
        {
            /* code */
            ans *= 2;
        }

        ans /= 2;
        ans--;
        cout << ans << endl;
    }

    return 0;
}
