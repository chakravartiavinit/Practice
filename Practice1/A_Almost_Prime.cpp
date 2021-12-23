#include <bits/stdc++.h>
using namespace std;
bool check(int a)
{
    set<int> alpha;
    for (int i = 2; i <= a; ++i)
    {
        while (a % i == 0)
        {
            a = a / i;
            alpha.insert(i);
        }
    }
    if (alpha.size() == 2)
    {
        return true;
    }
    return false;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int count = 0;
    for (int i = 2; i <= n; ++i)
    {
        if (check(i) == true)
        {
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}