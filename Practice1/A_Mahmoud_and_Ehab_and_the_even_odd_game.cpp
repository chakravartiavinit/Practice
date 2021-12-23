#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;
    cin >> n;
    long long even, odd;
    if (n % 2 == 0)
    {
        even = n / 2;
        odd = n / 2;
    }
    else
    {
        odd = (n / 2) + 1;
        even = n - odd;
    }
    if(odd>even)
    {
        
    }
    return 0;
}