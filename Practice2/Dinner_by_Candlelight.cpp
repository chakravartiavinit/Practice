#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long a, y, x;
        cin >> a >> y >> x;
        long long count = (a * x + 1);
        if (y > a)
            cout << count << "\n";
        else if (y == a)
            cout << count - 1 << "\n";
        else
        {
            count -= (a - y) * x;
            count--;
            cout << count << "\n";
        }
    }
    return 0;
}