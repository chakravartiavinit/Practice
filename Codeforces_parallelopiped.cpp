#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int area1,area2,area3,a,b,c,sum;
    cin>>area1>>area2>>area3;

    a=sqrt((area1*area3)/area2);
    b=sqrt((area2*area3)/area1);
    c=sqrt((area1*area2)/area3);

    sum=4*(a+b+c);
    cout<<sum<<"\n";



    return 0;
}
