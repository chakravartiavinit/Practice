#include <iostream>
#include <algorithm>
using namespace std;
const long long int mod = 1000000007;
long long int FiboCalculator(long long int a)
{
    if (a == 1 || a == 0)
    {
        return a;
    }
    long long int first = 1, second = 1, nextterm;
    for (int i = 3; i <= a; i++)
    {
        nextterm = (first + second);
        first = second;
        second = nextterm;
    }
    return nextterm;
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
        long long int n, x, l, m, z;
        cin >> n >> x;
        l = FiboCalculator(n);
        m = FiboCalculator(n + 1);
        z = FiboCalculator(x);
        if (__gcd(l, z) == 1 && __gcd(m, z))
        {
            cout << "Yes"
                 << "\n";
        }
        else
        {
            cout << "No"
                 << "\n";
        }
    }

    return 0;
}
