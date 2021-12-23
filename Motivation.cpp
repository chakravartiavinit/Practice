#include <bits/stdc++.h>
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
        int n;
        long long x;
        cin>>n>>x;
        int temp2=0;
        while(n--)
        {
            int a,b;
            cin>>a>>b;
            if(a<=x)
            {
                temp2=max(temp2,b);
            }
        }
        cout<<temp2<<"\n";
    }
    return 0;
}