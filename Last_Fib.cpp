#include <bits/stdc++.h>
using namespace std;
long long Rec(long long n)
{
    long long first = 0, second = 1, nextterm;
    for (int i = 1; i < n; ++i)
    {
        nextterm = (first % 10 + second % 10) % 10;
        first = second;
        second = nextterm;
    }
    return nextterm;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    cout << Rec(n) << "\n";
    return 0;
}