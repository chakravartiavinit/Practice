#include <iostream>
#include<set>
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
        long a,b;
        cin>>a>>b;
        int ar1[a],ar2[b];
        set<int> s1;
        for(int i=0;i<a;i++)
        {
            cin>>ar1[i];
        }
        for(int j=0;j<b;j++)
        {
            cin>>ar2[j];
        }
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
            {
                s1.insert(i+j);
            }
        }
        cout<<s1.size()<<"\n";
    }
    return 0;
}
