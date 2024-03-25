#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    vector<int> res(n + m);

    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (a[i] <= b[j])
            res[k++] = a[i++];
        else
            res[k++] = b[j++];
    }

    while (i < n)
        res[k++] = a[i++];

    while (j < m)
        res[k++] = b[j++];

    for (int x = 0; x < n + m; x++)
        cout << res[x] << " ";
    cout << endl;

    return 0;
}
