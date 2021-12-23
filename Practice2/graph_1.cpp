#include <bits/stdc++.h>
using namespace std;
class graph
{
    map<string, vector<pair<string, int>>> mp;

public:
    void add(string x, string y, bool bidirect, int weight)
    {
        mp[x].push_back(make_pair(y, weight));
        if (bidirect == true)
        {
            mp[y].push_back(make_pair(x, weight));
        }
    }
    void Display()
    {
        for (auto x : mp)
        {
            vector<pair<string, int>> vt;
            vt = x.second;
            cout << x.first << "-> ";
            for (auto y : vt)
            {
                cout << y.first << " " << y.second << " ,";
            }
            cout << "\n";
        }
    }
};
int main()
{
    graph t;
    t.add("A", "B", true, 20);
    t.add("B", "D", true, 30);
    t.add("A", "C", true, 10);
    t.add("C", "D", true, 40);
    t.add("A", "D", false, 50);
    t.Display();
}
