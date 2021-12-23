#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    int i, j, count = 0;
    int a[29] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        a[s[i] - 'a']++;
    }
    for (int i = 0; i < 27; i++)
    {
        if (a[i] % 2 == 1)
        {
            count++;
        }
    }
    if (count % 2 == 1 || count == 0)
    {
        cout << "First\n";
    }
    else
    {
        cout << "Second\n";
    }

    return 0;
}