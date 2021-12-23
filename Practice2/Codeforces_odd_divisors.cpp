#include <iostream>

using namespace std;

bool check(long long int n)
{
    int count = 0, i = 2;
    while (n)
    {
        if (n % 2 != 0)
        {
            count++;
        }
        n = n / i;
        if (count > 1)
        {
            return true;
        }
    }
    return false;
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