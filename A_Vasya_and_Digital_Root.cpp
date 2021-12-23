#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int k, d;
    cin >> k >> d;
    if (k > d)
    {
        string alpha;
        alpha.push_back('1');
        int temp = k - 1;
        for (int i = 0; i < temp / 2; i++)
        {
            alpha.push_back('0');
        }
        for (int i = 0; i < temp / 2; i++)
        {
            alpha.push_back('1');
        }
        cout << alpha << "\n";
    }
    return 0;
}