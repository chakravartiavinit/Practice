#include <bits/stdc++.h>
#include <vector>
bool prime[1000001];
long int arr[1000001];
using namespace std;
void primes()
{

    memset(prime, true, sizeof(prime));

    for (int i = 2; i * i <= 1000001; i++)
    {
        if (prime[i] == true)
        {
            for (int j = i * 2; j <= 1000001; j = j + i)
            {
                prime[j] = false;
            }
        }
    }
    int count = 0;
    for (int i = 2; i <= 1000000; i++)
    {
        if (prime[i])
        {
            arr[i] = arr[i] + arr[i - 1] + 1;
        }
        else
        {
            arr[i] = arr[i] + arr[i - 1];
        }
    }
}

int main()
{
    // your code goes here when it starts
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int t;
    cin >> t;
    primes();
    while (t--)
    {
        long int x, y;
        cin >> x >> y;

        if (arr[x] <= y)
        {
            cout << "Chef"
                 << "\n";
        }
        else
        {
            cout << "Divyam"
                 << "\n";
        }
    }
    return 0;
}