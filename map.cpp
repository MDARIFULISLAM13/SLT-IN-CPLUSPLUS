#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> m;
    m["Arif"] = 100;
    m["akhi"] = 101;
    m["Rupa"] = 102;
    m.insert(make_pair("Araf", 103));
    printf("%d\n", m["Arif"]);
    map<string, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
}