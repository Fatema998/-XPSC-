// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         /* code */
//         string n;
//         cin >> n;
//         if ("Timur" == n || " miurT" == n || "Trumi" == n || " mriTu" == n)
//         {

//             cout << "YES" << endl;
//         }
//         else
//         {

//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int a = 0, b = 0, c = 0, d = 0, e = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'T' and n==5)
            {
                a++;
            }
            else if (s[i] == 'i' and n==5)
            {
                b++;
            }
            else if (s[i] == 'm' and n==5)
            {
                c++;
            }
            else if (s[i] == 'u' and n==5)
            {
                d++;
            }
            else if (s[i] == 'r' and n==5)
            {
                e++;
            }
        }
        if (a == 1 && b == 1 && c == 1 && d == 1 && e == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}













