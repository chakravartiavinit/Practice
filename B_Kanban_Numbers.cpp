#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a;
    cin >> a;
    if (a % 10 == 9 || a % 10 == 7 || a % 10 == 1 || a == 10)
    {
        cout << "NO\n";
    }
    else
    {
        if (a < 13)
        {
            cout << "YES\n";
        }
        else if (a >= 13 && a < 30)
        {
            cout << "NO\n";
        }
        else if (a >= 30 && a < 70)
        {
            cout << "YES\n";
        }
        else if (a >= 70 && a < 80)
        {
            cout << "NO\n";
        }
        else if (a >= 80 && a < 90)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}