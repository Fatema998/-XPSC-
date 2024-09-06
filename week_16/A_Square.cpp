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
        int x1, x2, y1, y2, x3, x4, y3, y4;
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        cin >> x3 >> y3;
        cin >> x4 >> y4;

        int ans = 1;
        if (x1 == x3)
        {
            ans *= abs(y1 - y3);
        }
        else
        {
            ans *= abs(x1 - x3);
        }
        if (x2 == x4)
        {
            ans *= abs(y2 - y4);
        }
        else
        {
            ans *= abs(x2 - x4);
        }
        cout << ans << endl;
    }

    return 0;
}
