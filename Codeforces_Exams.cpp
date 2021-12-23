#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k, flag = 0;
    cin >> n >> k;
    if (3 * n > k)
    {
        cout << 3 * n - k << "\n";
    }
    else
    {
        cout << "0"
             << "\n";
    }

    return 0;
}