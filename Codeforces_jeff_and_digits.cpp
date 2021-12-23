#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, zero = 0, five = 0, c;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            zero++;
        }
        else
        {
            five++;
        }
    }
    if (zero == 0)
    {
        cout << "-1"
             << "\n";
    }
    else
    {
        c = floor(five / 9) * 9;
        if (c == 0)
        {
            cout << "0"
                 << "\n";
        }
        else
        {
            for (int i = 0; i < c; i++)
            {
                cout << "5";
            }
            for (int i = 0; i < zero; i++)
            {
                cout << "0";
            }
        }
    }

    return 0;
}
