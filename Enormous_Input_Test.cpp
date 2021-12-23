#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long n, a, k, count = 0;
    cin >> n >> k;
    while (n--)
    {
        cin >> a;
        if (a % k == 0)
        {
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}