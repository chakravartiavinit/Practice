#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long mod = 1e9 + 7;
    vector<int> v = {1, 2, 3, 4, 5};
    long long count = 0;
    for (int i = 0; i < v.size(); ++i)
    {
        for (int j = i + 1; j < v.size(); ++j)
        {
            count = count + (v[j] - v[i]) % mod;
        }
    }
    cout << count << "\n";
    return 0;
}