#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,m,set,count=0;
    cin>>n>>m;
    set=max(n,m);
    for(int i=0;i<=sqrt(set);i++)
    {
        for(int j=0;j<=sqrt(set);j++)
        {
            if(pow(i,2)+j==n&&i+pow(j,2)==m)
            {
                count++;
            }
        }
    }
    cout<<count<<"\n";
    return 0;
}
