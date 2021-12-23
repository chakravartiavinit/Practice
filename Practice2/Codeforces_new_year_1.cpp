#include <iostream>

using namespace std;

bool check(long long int n)
{
    bool oddDivisor = false;
    long long int quotient = n / 2020;
    long long int remainder = n % 2020;

    if (quotient >= remainder)
    {

        oddDivisor = true;
    }
    return oddDivisor;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        long long int n;
        cin >> n;
        if (check(n))
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
}