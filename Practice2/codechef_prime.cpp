#include <iostream>
#include <string>

using namespace std;

bool checkGoodTupple(long long int n);
bool isPrime(long long int n);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t;
    cin >> t;

    while (t--)
    {
        long long int n;
        cin >> n;
        if (checkGoodTupple(n))
            cout << 1;
        else
            cout << 0;
        cout << endl;
    }
}

bool isPrime(long long int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (long long int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

bool checkGoodTupple(long long int n)
{
    if (n <= 4)
        return false;
    for (long long int i = 2; i <= n; i++)
        if (isPrime(i))
            if (isPrime(i + 2) && i + 2 <= n)
                return true;

    return false;
}
