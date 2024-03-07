#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> a;
    list<int>::iterator it;

    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 != 0)
        {
            a.push_back(i);
        }
        else
        {
            a.push_front(i);
        }
    }

    for (it = a.begin(); it != a.end(); it++)
    {
        cout << *it << "\t";
    }
}