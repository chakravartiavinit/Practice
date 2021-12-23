#include <bits/stdc++.h>
using namespace std;
bool check(char a, char b, char c, char d)
{
    if ((a == b && b == c) || (b == c && c == d) || (d == c && c == a) || (d == a && a == b))
    {
        return true;
    }
    return false;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    bool flag = false;
    char arr[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (check(arr[i][j], arr[i + 1][j + 1], arr[i][j + 1], arr[i + 1][j]))
            {
                flag = true;
            }
        }
    }
    flag == true ? cout << "YES\n" : cout << "NO\n";
    return 0;
}
