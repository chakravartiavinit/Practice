#include<iostream>
using namespace std;
bool DigitChecker(int n,int d)
{
    while(n>0)
    {
        if(n%10==d)
        {
            return true;
            break;
        }
        n=n/10;
    }
    return false;
}
bool LuckyNumber(int n,int d)
{
    while(n>0)
    {
        if(DigitChecker(n,d))
        {
            return true;
            break;
        }
        else
        {
            n=n-d;
        }
        
    }
    return false;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int q,d;
        cin>>q>>d;
        int a[q];
        for(int i=0;i<q;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<q;i++)
        {
            if(LuckyNumber(a[i],d))
            {
                cout<<"YES"<<"\n";
            }
            else
            {
                cout<<"NO"<<"\n";
            }
            
        }
    }
    return 0;
}
