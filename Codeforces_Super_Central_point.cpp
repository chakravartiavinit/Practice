#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<pair<int, int>> point;
    int n, a, b, count2 = 0, netcount = 0, count1 = 0, count3 = 0, count4 = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        point.push_back(make_pair(a, b));
    }
    for (int i = 0; i < n; i++)
    {
        count1=0,count2=0,count3=0,count4=0;
        for (int j = 0; j < n; j++)
        {
            if ((point[i].first > point[j].first) && (point[i].second == point[j].second))
            {
                count1 = 1;
            }
            if ((point[i].first < point[j].first) && (point[i].second == point[j].second))
            {
                count2 = 1;
            }
            if ((point[i].second > point[j].second) && (point[i].first == point[j].first))
            {
                count3 = 1;
            }
            if ((point[i].second < point[j].second) && (point[i].first == point[j].first))
            {
                count4 = 1;
            }
        }
        if (count1 + count2 + count3 + count4 == 4)
        {
            netcount++;
        }
    }
    cout << netcount << "\n";

    return 0;
}