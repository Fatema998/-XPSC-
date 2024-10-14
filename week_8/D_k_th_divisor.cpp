#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int> a;
    for (int i = 1; i * i < n; i++)
    {
        /* code */
        if (i % n == 0)
        {
            a.push_back(i);
            if ((n / i) != i)
            {
                a.push_back(n / i);
            }
        }
    }
    sort(a.begin(), a.end());
    if (k > a.size())
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << a[k - 1] << endl;
    }

    return 0;
}