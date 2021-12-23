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
        vector<long long> vt(n);
        set<long long> alpha;
        for (int i = 0; i < n; ++i)
        {
            cin >> vt[i];
            alpha.insert(vt[i]);
        }
        cout << alpha.size() << "\n";
    }
    return 0;
}