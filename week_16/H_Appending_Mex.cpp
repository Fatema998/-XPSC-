#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll ele = -1;
    ll x, flag = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> x;
        if (ele + 1 < x)
        {
            cout << i + 1;
            flag = 1;
            break;
        }
        ele = max(ele, x);
    }
    if (flag == 0)
        cout << "-1" << endl;

    return 0;
}