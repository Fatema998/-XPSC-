#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
    }
    pbds<pair<int, int>> window;
    for (int i = 0; i < k; i++)
    {
        /* code */
        window.insert({a[i], i});
        cout << window.find_by_order((k - 1) / 2)->first << " ";
        for (int i = 1; i < n - k + 1; i++)
        {
            /* code */
            window.erase({a[i - 1], i - 1});
            window.insert({a[i + k - 1], i + k - 1});
            cout << window.find_by_order((k - 1) / 2)->first << " ";
        }
    }

    return 0;
}
