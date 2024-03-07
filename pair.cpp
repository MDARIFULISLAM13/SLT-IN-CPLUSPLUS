#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int, string>> v;
    vector<pair<int, string>>::iterator it;
    for (int i = 0; i < 3; i++)
    {
        int a;
        string s;
        cin >> a >> s;
        v.push_back(make_pair(a, s));
    }
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
}