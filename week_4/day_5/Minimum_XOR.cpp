

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         /* code */
//         int n;
//         cin >> n;
//         int XOR = 0;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++)
//         {
//             /* code */

//             cin >> a[i];
//             XOR ^= a[i];
//         }

//         int ans = XOR;
//         for (int i = 0; i < n; i++)
//         {
//             /* code */
//             ans = min(ans, (XOR ^ a[i]));
//         }
//         cout << ans << '\n';
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n;
        cin>>n;
        int XOR=0;
        vector<int>a(n);
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin>>a[i];
            XOR^=a[i];
        }
        int ans=XOR;
        for (int i = 0; i < n; i++)
        {
            /* code */
            ans=min(ans,(XOR^a[i]));
        }
        cout<<ans<<'\n';
    }
    
    return 0;
}