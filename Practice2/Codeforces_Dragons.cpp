#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int s, n, temp1, temp2, flag = 0;
    cin >> s >> n;
    vector<pair<int, int>> dual;
    for (int i = 0; i < n; i++)
    {
        cin >> temp1 >> temp2;
        dual.push_back(make_pair(temp1, temp2));
    }
    sort(dual.begin(), dual.end());
    for (int i = 0; i < n; i++)
    {
        if (s > dual[i].first)
        {
            s = s + dual[i].second;
        }
        else
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "NO"
             << "\n";
    }
    else
    {
        cout << "YES"
             << "\n";
    }

    return 0;
}