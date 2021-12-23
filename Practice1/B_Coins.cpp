#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long n;
    cin >> n;
    while (n != 1)
    {
        cout << n << " ";
        for (int i = 2; i <= n; ++i)
        {
            if (n % i == 0)
            {
                n = n / i;
                break;
            }
        }
    }
    cout<<n<<" ";

    return 0;
}