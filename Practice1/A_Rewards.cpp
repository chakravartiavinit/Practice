#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a1, a2, a3, b1, b2, b3, n;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n;
    int medal, cups;
    medal = a1 + a2 + a3;
    cups = b1 + b2 + b3;
    if (medal > n * 5 || cups > n * 10)
    {
        cout << "NO\n";
    }
    else
    {
        if (medal < n || cups < n)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }

    return 0;
}