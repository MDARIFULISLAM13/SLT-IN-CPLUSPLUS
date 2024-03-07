#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    vector<int>::iterator it;
    int v;
    for (int i = 0; i < n; i++)
    {
        cin >> v;
        a.push_back(v);
    }
    // reverse(a.begin(), a.end());
    // for (it = a.begin(); it < a.end(); it++)
    {
        // cout << *it << "\t";
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    cout << "\n";
    for (it = a.begin(); it < a.end(); it++)
    {
        cout << *it << "\t";
    }
}