#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<string> s;

    s.push("Arif");
    s.push("Ari");
    s.push("Ar");

    s.pop();

    cout << s.top();
}