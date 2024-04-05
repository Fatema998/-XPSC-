#include <bits/stdc++.h>
using namespace std;
#define ll long long

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

        ll sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += abs(a[i]);
        }

        ll l = 0, r = 0, ans = 0;


        while (r < n)
        {
            if (a[r] < 0)
            {
                ans++;
                while(r < n and a[r] <= 0){
                    r++;
                }
            }
            r++;
        }
        
        cout << sum << " " << ans << endl;
    }
    return 0;
}