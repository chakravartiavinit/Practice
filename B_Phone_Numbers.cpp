#include <bits/stdc++.h>
using namespace std;
bool CheckTaxi(string a)
{
    bool t = true;
    for (int i = 1; i < 8 && t; ++i)
    {
        if (i == 2 || i == 5)
        {
            continue;
        }
        if (a[i] != a[0])
        {
            t = false;
        }
    }
    return true;
}
bool CheckPizza(string a)
{
    bool t = true;
    char m = a[0];
    for (int i = 1; i < 8 && t; ++i)
    {
        if (i == 2 || i == 5)
        {
            continue;
        }
        if (a[i] >= m)
        {
            t = false;
            m = a[i];
        }
    }
    return t;
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<string> p, t, g;
    int bp = 0, bt = 0, bg = 0;
    while (n--)
    {
        int si, pizza = 0, taxi = 0, girl = 0;
        string name;
        cin >> si >> name;
        while (si--)
        {
            string alpha;
            cin >> alpha;
            if (CheckPizza(alpha))
            {
                pizza++;
            }
            else if (CheckTaxi(alpha))
            {
                taxi++;
            }
            else
            {
                girl++;
            }
        }
        if (pizza >= bp)
        {
            bp = pizza;
            p.push_back(name);
        }
        else if (taxi >= bt)
        {
            bt = taxi;
            t.push_back(name);
        }
        else if (girl >= bg)
        {
            bg = girl;
            g.push_back(name);
        }
    }
    cout << "If you want to order a pizza, you should call: ";
    for (int i = 0; i < p.size(); ++i)
    {
        cout << p[i] << " ";
    }
    cout << "\n";
    cout << "If you want to call a taxi, you should call: ";
    for (int i = 0; i < t.size(); ++i)
    {
        cout << t[i] << " ";
    }
    cout << "\n";
    cout << "If you want to go to a cafe with a wonderful girl, you should call: ";
    for (int i = 0; i < g.size(); ++i)
    {
        cout << g[i] << " ";
    }
    cout << "\n";
    return 0;
}