#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        string a, b;
        cin >> a >> b;
        unordered_set<char> alpha;
        for (int i = 0; i < a.length(); ++i)
        {
            alpha.insert(a[i]);
        }
        int count = 0;
        for (int i = 0; i < b.length(); ++i)
        {
            if (alpha.find(b[i]) != alpha.end())
            {
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}