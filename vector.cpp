#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a;
    vector<int>::iterator it;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        a.push_back(v);
    }
    for (it = a.begin(); it < a.end(); it++)
    {
        cout << *it << "\t";
    }
}