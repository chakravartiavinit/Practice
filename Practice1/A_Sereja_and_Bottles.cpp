#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    bool flag;
    int n, count = 0;
    cin >> n;
    vector<int> brand(n, 0);
    vector<int> open(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> brand[i];
        cin >> open[i];
    }
    for (int i = 0; i < n; i++)
    {
        flag = false;
        for (int j = 0; j < n; j++)
        {
            if (open[j] == brand[i] && i != j)
            {
                flag = true;
                break;
            }
        }
        if (flag == false)
        {
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}
