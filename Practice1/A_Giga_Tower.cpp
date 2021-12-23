#include <bits/stdc++.h>
using namespace std;
bool check(long long n)
{
    int count = 0;
    if(n<0)
    {
        n=n*(-1);
    }

    while (n > 0)
    {
        if ((n % 10) == 8)
        {
            count++;
        }
        n = n / 10;
    }

    if (count > 0)
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
    long long n;
    cin >> n;
    int count = 0;
    bool a = false;
    int i = 1;
    while (!a)
    {
        if (check(n + i))
        {
            count++;
            break;
        }
        count++;
        i++;
    }
    cout << count << "\n";
    return 0;
}