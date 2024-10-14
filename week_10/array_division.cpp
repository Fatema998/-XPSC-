#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int maxN = 2e5;
const ll MAX_SUM = 1e18;

int N, K;
int a[maxN];

bool check(ll X)
{
    int k = 1;
    ll sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += a[i];
        if (sum > X)
        {
            k++;
            sum = a[i];
        }
    }
    return k <= K;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> K;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    ll lo = *max_element(a, a + N);
    ll hi = MAX_SUM;

    while (lo < hi)
    {
        ll mid = (lo + hi) / 2;
        if (check(mid))
        {
            hi = mid;
        }
        else
        {
            lo = mid + 1;
        }
    }

    cout << lo << endl;
    return 0;
}
