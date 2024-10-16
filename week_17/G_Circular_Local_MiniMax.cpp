#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ar[n + 4];
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        sort(ar, ar + n);
        vector<int> v;
        if (n % 2 == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        for (int i = 0, j = n / 2; i < n / 2; i++, j++)
        {
            v.push_back(ar[i]);
            v.push_back(ar[j]);
        }
        v.push_back(v[0]);
        v.push_back(v[1]);
        int ans = 0;
        for (int i = 1; i < v.size() - 1; i++)
        {
            if (v[i] > v[i - 1] && v[i] > v[i + 1])
                continue;
            else if (v[i] < v[i - 1] && v[i] < v[i + 1])
                continue;
            else
            {
                ans = 1;
                break;
            }
        }
        if (ans == 1)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}