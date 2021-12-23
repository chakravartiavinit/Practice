#include <bits/stdc++.h>
using namespace std;
long long Fastpow(long long a, long long b)
{
    if (b == 1)
    {
        return a;
    }
    else if (a == 0)
    {
        return 0;
    }
    else if (b == 0 || a == 1)
    {
        return 1;
    }
    long long temp = Fastpow(a, b / 2);
    if (b % 2 == 0)
    {
        return temp * temp;
    }
    return temp * temp * a;
}
int digitsum(long long n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    set<long long> finalans;
    for (int i = 1; i <= 81; ++i)
    {
        long long x = b * Fastpow(i, a) + c;
        if (digitsum(x) == i && x < 1000000000)
        {
            finalans.insert(x);
        }
    }
    cout << finalans.size() << "\n";
    for(auto x:finalans)
    {
        cout<<x<<" ";
    }
    return 0;
}