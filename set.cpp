#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    // set<int>::iterator it;
    for (int i = 0; i < 5; i++)
    {
        int a;
        cin >> a;
        s.insert(a);
    }
    s.erase(s.find(5));

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }
    auto it = find(s.begin(), s.end(), 3);
    if (it != s.end())
    {
        int dis = distance(s.begin(), it);
        cout << dis << endl;
    }
}