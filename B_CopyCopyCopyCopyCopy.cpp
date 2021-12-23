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
        int n;
        cin >> n;
        long long arr[n];
        set<long long> alpha;
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
            alpha.insert(arr[i]);
        }
        cout << alpha.size() << "\n";
    }
    return 0;
}