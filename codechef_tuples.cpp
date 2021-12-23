#include <iostream>

using namespace std;

long int checkGoodTupple(long int n);
bool isPrime(long int n);

long int nextPrime(long int N)
{

    // Base case
    if (N <= 1)
        return 2;

    long int prime = N;
    bool found = false;

    while (!found)
    {
        prime++;

        if (isPrime(prime + 1))
            found = true;
    }

    return prime;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long int t;
    cin >> t;

    while (t--)
    {
        long int n;
        cin >> n;
        cout << checkGoodTupple(n) << "\n";
    }
}

bool isPrime(long int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (long int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

long int checkGoodTupple(long int n)
{
    long int count = 0;
    if (n <= 4)
        return 0;
    long int i = 3;
    while (i <= n)
        if (isPrime(i))
            if (isPrime(i + 2) && i + 2 <= n)
            {
                count++;
                i = nextPrime(i);
            }
    return count;
}