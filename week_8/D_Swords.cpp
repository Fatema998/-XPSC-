#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long int n, a[200010], sum, x, gc, i;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i], x = max(x, a[i]);
    gc = x - a[0];
    for (i = 0; i < n; i++)
        sum += x - a[i], gc = __gcd(gc, x - a[i]);
    cout << sum / gc << " " << gc;
}