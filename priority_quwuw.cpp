#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    while (!q.empty())
    {
        int x = q.top();
        cout << x << endl;
        q.pop();
    }
}