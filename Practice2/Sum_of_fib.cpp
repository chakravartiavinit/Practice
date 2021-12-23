#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    long long first = 0, second = 1, nextterm;
    for (int i = 0; i < n - 1; ++i)
    {
        nextterm = first + second;
        first = second;
        second = nextterm;
    }
    cout << nextterm << "\n";
    return 0;
}