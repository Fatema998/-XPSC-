
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;

        int flag = 0;
        cin >> n;
        string s1, s2;
        cin >> s1;
        cin >> s2;
        for (int i = 0; i < n; i++)
        {
            /* code */
            if (s1[i] != s2[i] and (s1[i] == 'R' or s2[i] == 'R'))
                // if  ( s1[i]!=s2[i] and ((s1[i] == 'R' && s2[i] != 'R') || (s1[i] != 'R' && s2[i] == 'R')))

                // if (s1[i] != s2[i] and (s1[i] == 'G' || s1[i] == 'B') || (s2[i] == 'G' || s2[i] == 'B'))
                flag = 1;
            // break;
        }
        if (flag)
        {
            cout << "NO" << endl;
        }
        else
        {

            cout << "YES" << endl;
        }
    }

    return 0;
}
