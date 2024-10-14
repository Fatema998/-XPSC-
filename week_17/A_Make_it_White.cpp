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
        string s;
        cin >> s;
        int frist = 0, last = 0;
        for (int i = 0; i < n; i++)
        {
            /* code */
            if (s[i] == 'B')
            {
                frist = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            /* code */
            if (s[i] == 'B')
            {
                last = i;
                break;
            }
        }
        cout << last - frist + 1 << endl;
    }

    return 0;
}