#include <bits/stdc++.h>
using namespace std;
unsigned long long SumDigit(long long a)
{
    unsigned long long sum = 0;
    while (a)
    {
        sum = sum + a % 10;
        a = a / 10;
    }
    return sum;
}
int gcd(unsigned long long a, unsigned long long b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        unsigned long long n;
        cin >> n;
        while (1)
        {
            if (gcd(n, SumDigit(n)) > 1)
            {
                cout << n << "\n";
                break;
            }
            else
            {
                n++;
            }
        }
    }
    return 0;
}