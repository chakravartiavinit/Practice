#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,count=0,index=0;
    cin>>n;
    int a[n];
    int *minimum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   minimum=min_element(a,a+n);
    for(int i=0;i<n;i++)
    {
        if(a[i]==*minimum)
        {
            index=i;
            count++;
        }
    }
    if(count>1)
    {
        cout<<"Still Rozdil"<<"\n";
    }
    else
    {
        cout<<(index+1)<<"\n";
    }
    

    return 0;
}
