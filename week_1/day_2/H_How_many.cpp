// #include <iostream>

// using namespace std;

// int main() {
//     int S, T;
//     cin >> S >> T;

//     int count = 0;
//     for (int a = 0; a <= 100; ++a) {
//         for (int b = 0; b <= 100; ++b) {
//             for (int c = 0; c <= 100; ++c) {
//                 if (a + b + c <= S && a * b * c <= T) {
//                     count++;
//                 }
//             }
//         }
//     }

//     cout << count << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, t;
    cin >> s >> t;
    int cnt = 0;
    for (int i = 0; i <= s; i++)
    {
        /* code */
        for (int j = 0; j <= s; j++)
        {
            /* code */
            for (int k = 0; k <= s; k++)
            {
                /* code */
                if ((i + j + k <= s) && (i * j * k <= t))
                {
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;

    return 0;
}