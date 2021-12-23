#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int m, h, temp = 0;
        cin >> m >> h;
        temp = m / (h * h);
        if (temp <= 18)
        {
            cout << "1\n";
        }
        else if (temp >= 19 && temp <= 24)
        {
            cout << "2\n";
        }
        else if (temp >= 25 && temp <= 29)
        {
            cout << "3\n";
        }
        else
        {
            cout << "4\n";
        }
    }

    return 0;
}