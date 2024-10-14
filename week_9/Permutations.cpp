#include <bits/stdc++.h>
#define ll long long
using namespace std;

void permutation(int n)
{
    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION\n";
        return;
    }
    for (int i = 2; i <= n; i += 2)
    {
        /* code */
        cout << i << " ";
    }
    for (int i = 1; i <= n; i += 2)
    {
        /* code */
        cout << i << " ";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    permutation(n);

    return 0;
}
