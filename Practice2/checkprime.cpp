#include <bits/stdc++.h>
using namespace std;
bool check(long n)
{
    if ((n - 1) % 6 == 0)
    {
        return true;
    }
    else if ((n + 1) % 6 == 0)
    {
        return true;
    }
    return false;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long n;
    cin >> n;
    check(n) == true ? cout << "YES\n" : cout << "No\n";

    return 0;
}