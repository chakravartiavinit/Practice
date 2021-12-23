#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    double n, x, y;
    cin >> n >> x >> y;
    if (ceil((n * y) / 100) > x)
    {
        cout << ceil((y * n) / 100) - x << '\n';
    }
    else
    {
        cout << "0\n";
    }

    return 0;
}