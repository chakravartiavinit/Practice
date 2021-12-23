#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<vector<int>> A = {{15, 28},
                             {45, 3},
                             {108, 75},
                             {82, 106},
                             {108, 76},
                             {95, 103},
                             {65, 101},
                             {104, 80},
                             {62, 67},
                             {104, 70},
                             {75, 60},
                             {91, 105},
                             {88, 86},
                             {70, 80},
                             {80, 65},
                             {81, 87},
                             {108, 79},
                             {69, 66},
                             {107, 60},
                             {73, 78},
                             {03, 105},
                             {84, 61},
                             {104, 74},
                             {95, 99},
                             {90, 81},
                             {60, 109}};

    multimap<int, int> mp;
    for (int i = 0; i < A.size(); ++i)
    {
        int x = A[i][0], y = A[i][1];
        mp.insert({(x * x )+ (y * y), i});
    }
    vector<vector<int>> finalans;
    int B = 5;
    for (auto it = mp.begin(); it != mp.end() && B > 0; it++, B--)
    {
        vector<int> ans;
        ans.push_back(A[it->second][0]);
        ans.push_back(A[it->second][1]);
        finalans.push_back(ans);
    }
    for (int i = 0; i < finalans.size(); ++i)
    {
        for (int j = 0; j < finalans[0].size(); ++j)
        {
            cout << finalans[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}