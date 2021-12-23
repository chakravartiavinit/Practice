#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    bool flag = true;
    int a[150] = {0};
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < s1.length(); i++)
    {
        a[s1[i]]++;
    }
    for (int j = 0; j < s2.length(); j++)
    {
        a[s2[j]]--;
    }
    for (int i = 0; i < 150; i++)
    {
        if (a[i] != 0)
        {
            flag = false;
            break;
        }
    }
    flag == true ? cout << "YES\n" : cout << "NO\n";

    return 0;
}