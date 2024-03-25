#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; ++i)
        {
            int moves;
            string s;
            cin >> moves >> s;
              for (int j = 0; j < moves; j++)
            {
                if (s[j] == 'D')
                {
                    a[i] += 1;
                    if (a[i] == 10)
                    {
                        a[i] = 0;
                    }
                }
                else if (s[j] == 'U')
                {
                    a[i] -= 1;
                    if (a[i] == -1)
                    {
                        a[i] = 9;
                    }
                }
            }
        }

        for (int val : a)
        {
            cout << val << " ";
        }

              cout << '\n';
    }

    return 0;
}