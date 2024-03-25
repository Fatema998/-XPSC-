
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, k;
    cin >> k >> s;
    int cnt = 0;
    for (int x = 0; x <= k; x++)
    {
        /* code */
        for (int y = 0; y <= k; y++)
        {
            /* code */
            int z = s - x - y;
            if (z >= 0 and z <= k)
                cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
