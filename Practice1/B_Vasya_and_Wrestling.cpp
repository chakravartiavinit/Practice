#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;
    cin >> n;
    vector<long long> pos, neg;
    long long x;
    long long sum1 = 0, sum2 = 0;
    bool flag=true;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        if (x > 0)
        {
            sum1 += x;
            pos.push_back(x);
            flag=true;
        }
        else
        {
            sum2 += abs(x);
            neg.push_back(abs(x));
            flag=false;
        }
    }
    if (sum1 > sum2)
    {
        cout << "first\n";
    }
    else if(sum2>sum1)
    {
        cout<<"second\n";
    }
    else
    {
        if(pos>neg)
        {
            cout<<"first\n";
        }
        else if(pos<neg)
        {
            cout<<"second\n";
        }
        else
        {
            if(flag==true)
            {
                cout<<"first\n";
            }
            else
            {
                cout<<"second\n";
            }
            
        }
        
    }
    

    return 0;
}