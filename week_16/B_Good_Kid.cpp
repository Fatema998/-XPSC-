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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin >> a[i];
        }
        sort(a, a + n);
        a[0] = a[0] + 1;
        int pro = 1;
        for (int i = 0; i < n; i++)
        {
            /* code */
            pro *= a[i];
        }
        cout << pro << endl;
    }

    return 0;
}