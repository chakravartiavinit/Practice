#include <bits/stdc++.h>
using namespace std;
bool check(long long n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n = n / 10;
    }
    if (sum == 10)
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
    int k;
    cin >> k;
    int count = 0;
    long long alpha = 1e12;
    for (long long i = 19; i <= alpha; i++)
    {
        if (check(i) == true)
        {
            count++;
        }
        if (count == k)
        {
            cout << i << "\n";
            break;
        }
    }
    return 0;
}