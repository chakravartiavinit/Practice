#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,maxelem,maxdima,sum=0,count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    sum=accumulate(a , a+n ,0);
    maxelem=5*n-sum;
    int i=0;
    while(i<7)
    {
        
    }
    cout<<count<<"\n";
    return 0;
}
