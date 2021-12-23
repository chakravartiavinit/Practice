#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    unordered_set<long long> st;
    long long n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout <<"8"<< " " << (n - 8) << "\n";
    }
    else
    {
        cout <<"9"<< " " << (n - 9) << "\n";
    }

    return 0;
}