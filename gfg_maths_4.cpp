#include <bits/stdc++.h>
using namespace std;

int CountTrailingZeros(int n)
{
    // declare bitset of 64 bits
    bitset<64> bit;

    // set bitset with the value
    bit |= n;

    int zero = 0;

    for (int i = 0; i < 64; i++)
    {
        if (bit[i] == 0)
            zero++;
        // if '1' comes then break
        else
            break;
    }

    return zero;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<CountTrailingZeros(n)<<"\n";
    }
}