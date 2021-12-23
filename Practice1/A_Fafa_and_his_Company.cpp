#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i < n; ++i)
    {
        int temp = i;
        if ((n - i) % i == 0)
        {
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}