#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, a, b, c, maxx = 0;
    cin >> n >> a >> b >> c;
    for (int i = 0; i <= n; i += a)
    {
        for (int j = 0; j <= n - i; j += b)
        {
            float z = float(n - (i + j)) / float(c);
            if (floor(z) == ceil(z))
            {
                int x = i / a;
                int y = j / b;
                maxx = max(maxx, x + y + int(z));
            }
        }
    }
    cout << maxx << "\n";

    return 0;
}