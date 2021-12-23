#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<long long> A = {1, 1, 1, 2, 7, 8};
    int count = 0;
    for (int i = 0; i < A.size() - 1; ++i)
    {
        long long diff = A[i + 1] - A[i];
        if (diff <= 0)
        {
            A[i + 1] += abs(diff) + 1;
            count += abs(diff) + 1;
        }
    }
    for (auto x : A)
    {
        cout << x << " ";
    }
    cout << "\n"
         << count << "\n";
    return 0;
}