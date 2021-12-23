#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> v = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5};
    vector<int>::iterator low1, low2, low3;
    low1 = upper_bound(v.begin(), v.end(), 4);
    cout << *low1 << '\n';
    return 0;
}
