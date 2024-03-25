#include <bits/stdc++.h>
using namespace std;

char missing(const string &s)
{
 bool flag[26] = {false};
for (char ch : s)
{
    /* code */
    if ('a' <= ch && ch <= 'z')
    {
        flag[ch - 'a'] = true;
    }
}
for (int i = 0; i < 26; i++)
{
    /* code */
    if (!flag[i]) {
            return 'a' + i;
        }
        }
        return ' ';
}

int main()
{
    string s;
    cin >> s;
    char result = missing(s);
    if (result == ' ')
    {
        cout << "None" << endl;
    }
    else
    {

        cout << result << endl;
    }
    return 0;
}