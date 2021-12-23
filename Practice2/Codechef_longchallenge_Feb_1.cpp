#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,sum=0;
    cin>>n;
    for(int i=1;i<10;i++)
    {
        if(n%i==0)
        {
            sum=max(sum,i);
        }
    }
    cout<<sum<<"\n";
    return 0;
}