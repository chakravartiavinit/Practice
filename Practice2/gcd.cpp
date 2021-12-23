#include <bits/stdc++.h>
using namespace std;
long long gcdFun(long long a, long long b)
{

    while (b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        cout << gcdFun(a, b) << " " << (a / gcdFun(a, b)) * b << "\n";
    }

    return 0;
}
