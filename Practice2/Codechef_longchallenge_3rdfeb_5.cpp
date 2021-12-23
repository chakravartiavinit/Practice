#include <bits/stdc++.h>
#include <vector>
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
        int n;
        cin >> n;
        int sum = 0, maximum, c, d;
        int a[n], b[n], temp[n + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        map<int, pair<int, int>> indexes;
        for (int i = 0; i < n; i++)
        {
            indexes[a[i]] = {b[i], i};
        }
        int ax = 0;
        int current;
        for (auto it = indexes.begin(); it != indexes.end(); it++)
        {
            if (it == indexes.begin())
            {
                current = (it->second).second;
            }

            else
            {
                int index1 = (it->second).second;
                while (current >= index1)
                {
                    ax++;
                    index1 += ((it->second).first);
                }
                current = index1;
            }
        }
        cout << ax << "\n";
    }
    return 0;
}
