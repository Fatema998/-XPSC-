#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> p;
    for (int i = 0; i < n; i++)
    {
        int start, end;
        cin >> start >> end;
        p.push_back({start, 1});
        p.push_back({end, -1});
    }

    sort(p.begin(), p.end());

    int curr_ppl = 0;
    int max_ppl = 0;
    for (const pair<int, int> &t : p)
    {
        curr_ppl += t.second;
        max_ppl = max(max_ppl, curr_ppl);
    }

    cout << max_ppl << endl;
}