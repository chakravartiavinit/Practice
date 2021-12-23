#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (count == 0 && s[i] == 'h')
        {
            count++;
        }
        else if (count == 1 && s[i] == 'e')
        {
            count++;
        }
        else if (count == 2 && s[i] == 'l')
        {
            count++;
        }
        else if (count == 3 && s[i] == 'l')
        {
            count++;
        }
        else if (count == 4 && s[i] == 'o')
        {
            count++;
        }
    }
    if (count == 5)
    {
        cout << "YES"
             << "\n";
    }
    else
    {
        cout << "NO"
             << "\n";
    }

    return 0;
}