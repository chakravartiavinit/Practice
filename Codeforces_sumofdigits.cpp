#include <bits/stdc++.h>
using namespace std;
int digit(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, count = 0;
    cin >> n;
    if (n < 10)
    {
        cout << "0"
             << "\n";
    }
    else
    {
        if (digit(n) < 10)
        {
            cout << "1"
                 << "\n";
            n = digit(n);
        }
        else
        {
            while (digit(n) >= 10)
            {
                count++;
                n = digit(n);
            }
            cout << count << "\n";
        }
    }

    return 0;
}