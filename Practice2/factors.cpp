#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &A)
{
    int count = 0;
    for (int i = 0; i < A.size(); i++)
    {
        for (int j = i; j < A.size(); j++)
        {
            if (i < j)
            {
                if (A[i] > A[j])
                {
                    count++;
                }
            }
        }
    }
    return count;
}


int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int input, n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        v.push_back(input);
    }
    cout << solve(v);

    return 0;
}
