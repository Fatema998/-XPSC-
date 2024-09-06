#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll x;
    cin >> x;
    vector<ll> a;
    while (true)
    {
        /* code */
        if (isPrime(X))
            primes.push_back(x);
        x++;
        if (primes.size() == 2)
            break;
    }
    ll ans = primes[0] * primes[1];
    cout << ans << endl;

    return 0;
}