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
        int a, b;
        cin >> a >> b;
        cout << __gcd(a, b) << endl;
    }

    return 0;
}