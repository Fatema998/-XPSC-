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

    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    pbds<pair<int, int>> st;
    for (int i = 0; i < m; ++i)
    {
        st.insert({a[i], i});
    }

    ll P = st.find_by_order((m + 1) / 2 - 1)->first;
    ll d = 0;
    for (int i = 0; i < m; ++i)
    {
        d += abs(a[i] - P);
    }
    cout << d << " ";

    for (int i = 0; i < n - m; ++i)
    {
        st.erase({a[i], i});
        st.insert({a[i + m], i + m});
        ll p = st.find_by_order((m + 1) / 2 - 1)->first;
        d += abs(p - a[i + m]) - abs(P - a[i]);
        if (!(m & 1))
            d -= p - P;
        P = p;
        cout << d << " ";
    }

    return 0;
}
