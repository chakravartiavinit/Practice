#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    bool flag = true;
    int n, m, a, alpha;
    cin >> n >> m;
    bool arr[m + 1] = {false};
    while (n--)
    {
        cin >> a;
        for (int i = 0; i < a; i++)
        {
            cin >> alpha;
            arr[alpha] = true;
        }
    }
    for (int i = 1; i <= m; i++)
    {
        if (arr[i] == false)
        {
            flag = false;
            break;
        }
    }
    flag == true ? cout << "YES\n" : cout << "NO\n";
    return 0;
}