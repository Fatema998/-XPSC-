#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        /* code */
        ll a1, a2, b1, b2;
        cin >> a1 >> b1;
        cin >> a2 >> b2;
        if (a1 > b1)
            swap(a1, b1);
        if (a2 > b2)
            swap(a2, b2);
        if (a1 + a2 == b1 and a1 + a2 == b2)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
