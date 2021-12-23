#include <bits/stdc++.h>
using namespace std;
long long zero(long long n)
{
    long long count = 0;
    while (n)
    {
        count += n / 5;
        n = n / 5;
    }
    return count;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        cout << zero(n) << "\n";
    }
    return 0;
}