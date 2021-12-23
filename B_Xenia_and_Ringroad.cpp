#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n, m, temp, initial = 1, sum = 0;
    cin >> n >> m;
    while (m--)
    {
        cin >> temp;
        sum = sum + (temp - initial + n) % n;
        initial = temp;
    }
    cout << sum << '\n';
    return 0;
}