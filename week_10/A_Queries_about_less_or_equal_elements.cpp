#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    pbds<int> pb;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        int x;
        cin >> x;
        pb.insert(x);
    }
    // for (auto val : pb)
    // {
    //     cout << val << " ";
    // }
    for (int i = 1; i <= m; i++)
    {
        /* code */
        int x;
        cin >> x;
        cout << pb.order_of_key(x + 1) << " ";
    }
    cout << "\n";

    return 0;
}