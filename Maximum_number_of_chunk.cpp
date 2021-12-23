#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> A = {1, 2, 3, 4, 0};
    int Max = INT_MIN, count = 0;
    for (int i = 0; i < A.size(); ++i)
    {
        Max = max(Max, A[i]);
        if (Max == i)
        {
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}