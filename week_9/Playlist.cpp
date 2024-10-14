#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    set<int> unique_songs;
    int cnt = 0, start = 0;

    for (int i = 0; i < n; i++)
    {

        while (unique_songs.count(a[i]))
        {
            unique_songs.erase(a[start]);
            start++;
        }

        unique_songs.insert(a[i]);

        cnt = max(cnt, i - start + 1);
    }

    cout << cnt << endl;
}