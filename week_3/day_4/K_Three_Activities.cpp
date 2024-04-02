
#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, res = 0;
        cin >> n;
        vector<ll > a(n), b(n), c(n);
        vector<pair<ll, ll>> va, vb, vc;
        map<ll, ll> mp;
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
            va.push_back(make_pair(a[i], i));
        }
        for (long long i = 0; i < n; i++) {
            cin >> b[i];
            vb.push_back(make_pair(b[i], i));
        }
        for (ll i = 0; i < n; i++) {
            cin >> c[i];
            vc.push_back(make_pair(c[i], i));
        }
        sort(va.begin(), va.end(), [](pair<ll, ll> &x, pair<ll, ll> &y) {
            return x.first > y.first;
        });
        sort(vb.begin(), vb.end(), [](pair<ll, ll> &x, pair<ll, ll> &y) {
            return x.first > y.first;
        });
        sort(vc.begin(), vc.end(), [](pair<ll, ll> &x, pair<ll, ll> &y) {
            return x.first > y.first;
        });

        for (ll i = 0; i < 3; i++) {
            for (ll j = 0; j < 3; j++) {
                for (ll k = 0; k < 3; k++) {
                    if (va[i].second != vb[j].second && va[i].second != vc[k].second && vb[j].second != vc[k].second) {
                        res = max(res, va[i].first + vb[j].first + vc[k].first);
                    }
                }
            }
        }
        cout << res << endl;
    }

    return 0;
}
