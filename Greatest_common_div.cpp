#include <bits/stdc++.h>
using namespace std;
long long GCD(long long a, long long b)
{
    if (a == 0)
    {
        return b;
    }
    return GCD(b % a, a);
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long a, b;
    cin >> a >> b;
    cout << GCD(a, b) << "\n";
    return 0;
}