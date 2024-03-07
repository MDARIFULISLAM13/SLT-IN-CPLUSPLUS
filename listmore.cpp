#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ar[5] = {1, 3, 2, 4, 5};
    list<int> a(ar, ar + 5);
    list<int>::iterator it;
    it = find(a.begin(), a.end(), 3);

    if (it != a.end())
    {
        cout << "Y ";
    }
    a.insert(it, 5);
    for (it = a.begin(); it != a.end(); it++)
    {
        cout << *it << " ";
    }
}