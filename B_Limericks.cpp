#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{

    long long a, b, c;
    cin >> a;
    for (long long i = 2; i <= a; i++)
    {
        if (a % i == 0)
        {
            cout << i << a / i << "\n";
            return 0;
        }
    }
    return 0;
}