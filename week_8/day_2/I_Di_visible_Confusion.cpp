#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool can_erase_sequence(const vector<int> &a, int n)
{
    for (int i = 0; i < n; i++)
    {
        bool can_erase = false;
        for (int j = 1; j <= i + 1; j++)
        {
            if (a[i] % (j + 1) != 0)
            {
                can_erase = true;
                break;
            }
        }
        if (!can_erase)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (can_erase_sequence(a, n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}