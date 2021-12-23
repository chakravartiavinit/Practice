#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> v = {1, 1, 2, 3, 3};
    int k = 3;
    int MaxSum = 0;
    for (int i = 0; i < v.size() - k + 1; ++i)
    {
        auto it1 = v[k];
        int alpha = partial_sum(i, it1, 0);
        MaxSum = max(MaxSum, alpha);
    }
    cout << MaxSum << '\n';
    return 0;
}