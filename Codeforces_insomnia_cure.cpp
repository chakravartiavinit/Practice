#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k,l,m,n;
    long int d,count=0;
    cin>>k>>l>>m>>n>>d;
    for(int i=1;i<=d;i++)
    {
        if(i%k==0||i%l==0||i%m==0||i%n==0)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
