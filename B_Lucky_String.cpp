#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<char> v = {'a', 'b', 'c', 'd'};
    for (int i = 0; i < n; ++i)
    {
        cout << v[i % 4];
    }

    return 0;
}