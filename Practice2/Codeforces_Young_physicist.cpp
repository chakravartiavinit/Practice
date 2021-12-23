#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int temp1 = 0, temp2 = 0, temp3 = 0;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        temp1 += x;
        temp2 += y;
        temp3 += z;
    }
    if (temp1 == 0 && temp2 == 0 && temp3 == 0)
    {
        cout<<"YES"<<"\n";
    }
    else
    {
        cout<<"NO"<<"\n";
    }
    return 0;
}
