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
        string s;
        cin >> s;
        string str = "abc";
        int cnt = 0;
        for (int i = 0; i < 3; i++)
        {
            /* code */
            cnt += (s[i] != str[i]);
        }
        cout << (cnt <= 2 ? "YES\n" : "NO\n");
    }

    return 0;
}