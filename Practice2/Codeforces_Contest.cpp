#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b, c, d;
    long sum1 = 0, sum2 = 0;
    cin >> a >> b >> c >> d;
    sum1 = max(3 * a / 10, a - (a / 250) * c);
    sum2 = max(3 * b / 10, b - (b / 250) * d);
    if (sum1 == sum2)
    {
        cout << "Tie\n";
    }
    else
    {
        if (sum1 < sum2)
        {
            cout << "Vasya\n";
        }
        else
        {
            cout << "Misha\n";
        }
    }

    return 0;
}