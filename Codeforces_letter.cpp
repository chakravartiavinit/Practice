#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    int a[150] = {0}, flag = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] != ' ')
        {
            a[s1[i]]++;
        }
    }
    for (int j = 0; j < s2.length(); j++)
    {
        if (s2[j] != ' ')
        {
            a[s2[j]]--;
        }
    }
    for (int i = 0; i < 150; i++)
    {
        if (a[i] < 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
    }

    return 0;
}