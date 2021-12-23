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
        long n,m;
        cin>>n>>m;
        long arr[n];
        bool flag=false;
        unordered_set<long> st;
        for(long i=0;i<n;++i)
        {
            cin>>arr[i];
            st.insert(arr[i]);
        }
        for(long i=1;i<=m;++i)
        {
            if(st.count(i)==0)
            {
                flag=true;
                break;
            }
        }
        flag==true?cout<<"Yes\n":cout<<"No\n";

    }
    return 0;
}