#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int count1 = 0, count2 = 0;
    bool flag = true;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            count1++;
        }
        else
        {
            count1 = 0;
        }
        if (s[i] == '1')
        {
            count2++;
        }
        else
        {
            count2 = 0;
        }
        if (count1 == 7 || count2 == 7)
        {
            flag = false;
            break;
        }
    }
    if (flag == true)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
    }

    return 0;
}
