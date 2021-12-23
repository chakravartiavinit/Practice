#include <bits/stdc++.h>
using namespace std;
bool check(long long a, long long b, long long c)
{
    long long steps = 0;
    if (c < abs(a) + abs(b) || (c - abs(a) - abs(b)) % 2)
    {
        return false;
    }

    return true;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long a, b, s;
    cin >> a >> b >> s;
    check(a, b, s) == true ? cout << "Yes\n" : cout << "No\n";
    return 0;
}