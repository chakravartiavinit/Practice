#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, a, b, count = 0;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        if (a + 2 <= b)
        {
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}