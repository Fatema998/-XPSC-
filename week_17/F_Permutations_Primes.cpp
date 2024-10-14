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
        int current = 3;
        for (int i = 0; i < n; i++)
        {
            /* code */
            if (i == n / 2)
            {
                cout << "1"
                     << " ";
            }
            else if (i == 0)
            {
                cout << "2"
                     << " ";
            }
            else if (i == n - 1)
            {
                cout << "3"
                     << " ";
            }
            else
            {
                current++;
                cout << current << " ";
            }
        }
        cout << endl;
    }

    return 0;
}