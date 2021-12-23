#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        if (n % 2 == 0 && k % 2 == 0)
        {
            if (n > (k - 1))
            {
                cout << "YES\n";
                for (int i = 0; i < k - 1; i++)
                {
                    cout << "1 ";
                }
                cout << n - (k - 1) << " \n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        else if (n % 2 == 1 && k % 2 == 0)
        {
            cout << "NO\n";
        }
        else if (n % 2 == 0 && k % 2 == 1)
        {
            if (n > 2 * (k - 1))
            {
                cout << "YES\n";
                for (int i = 0; i < k - 1; ++i)
                {
                    cout << "2 ";
                }
                cout << n - 2 * (k - 1) << "\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        else if (n % 2 == 1 && k % 2 == 1)
        {
            if (n > k - 1)
            {
                cout << "YES\n";
                for (int i = 0; i < k - 1; ++i)
                {
                    cout << "1 ";
                }
                cout << n - (k - 1) << " \n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}