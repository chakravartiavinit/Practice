#include<iostream>
using namespace std;
bool Primechecker(int n)
{
    if(n<0)
    {
        return false;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
            break;
        }
    }
    return true;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(Primechecker(i))
        {
            cout<<i<<"\n";
        }
    }

    return 0;
}
