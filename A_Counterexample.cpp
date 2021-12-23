#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    unsigned long long x, y;
    cin >> x >> y;
    bool flag = false;
    for (unsigned long long i = x; i + 2 <= y; ++i)
    {
        if (__gcd(i, i + 1) == 1 && __gcd(i + 1, i + 2) == 1)
        {
            if (__gcd(i, i + 2) > 1)
            {
                cout << i << " " << i + 1 << " " << i + 2;
                flag = true;
                break;
            }
        }
    }
    if (flag == false)
    {
        cout << "-1\n";
    }

    return 0;
}