#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ar[] = {1, 2, 3, 4, 5};
    list<int> a(ar, ar + 5);
    list<int>::iterator it;
    a.pop_front();
    a.pop_back();
    for (it = a.begin(); it != a.end(); it++)
    {
        cout << *it << endl;
    }
}