#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;
    cin >> n;
    long long first = 0, second = 1, nextterm, sum = 0;
    for (int i = 1; i < n; ++i)
    {
        nextterm = (first % i + second % i) % i;
        sum += nextterm;
        first = second;
        second = nextterm;
    }
    cout << sum << "\n";

    return 0;
}