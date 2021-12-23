#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, a, b, count = 0;
    cin >> n >> a >> b;
    for (int i = 1; i <= n; i++)
    {
        if ((i - 1) <= b && (n - i) >= a)
        {
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}