#include <bits/stdc++.h>
using namespace std;
struct Traffic
{
    int start, end, length;
    string s;
};
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    fstream inp("a.txt", ios::in);
    fstream out("hash.txt", ios::out);
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    vector<Traffic> inputs(c);
    for(int i=0;i<c;i++)
    {
        cin>>inputs[i].start>>inputs[i].end;
        cin>>inputs[i].s>>inputs[i].length;
    }
    return 0;
}
