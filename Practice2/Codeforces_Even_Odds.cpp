#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    long long int n,k,even,odd,term;
    cin>>n>>k;
    if(n%2==0)
    {
        odd=even=n/2;
        if(k>n/2)
        {
            term=2*(k-odd);
        }
        else
        {
            term=2*k-1;
        }
        
    }
    else
    {
        odd=(n+1)/2;
        even=n-odd;
        if(k>odd)
        {
            term=2*(k-odd);
        }
        else
        {
            term=2*k-1;
        }
        
    }
    cout<<term<<"\n";

    return 0;
}
