#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
const long int mod = 1000000007;
long long int FiboCalculator(long long int a)
{
    long long int first = 0, second = 1, nextterm;
    for (int i = 2; i <= a; i++)
    {
        nextterm = (first + second) % mod;
        first = second;
        second = nextterm;
    }
    return nextterm;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,m,x,y;
        cin>>n>>m;
        x=__gcd(n,m);
        cout<<FiboCalculator(x)<<"\n";
    }
    return 0;
}
