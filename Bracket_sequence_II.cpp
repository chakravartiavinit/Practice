#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
long long FastPower(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    else if (b == 1)
    {
        return a;
    }
    long long x = FastPower(a, b / 2);
    if (b % 2 == 0)
    {
        return (x % mod) * (x % mod);
    }
    return (x % mod) * (x % mod) * a;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long number, answer;
    int n, count1 = 0, count2 = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == '(')
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    number = (n - s.size() - abs(count1 - count2)) / 2;
    answer = FastPower(2, number);
    cout << answer << "\n";

    return 0;
}