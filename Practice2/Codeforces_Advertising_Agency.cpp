#include <bits/stdc++.h> 
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n,k,max=0,count=0;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=n-k;i<n;i++)
        {
            max=max+a[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(a[i]+a[j]==max)
                {
                    count++;
                }
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}
