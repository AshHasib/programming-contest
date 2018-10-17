#include<bits/stdc++.h>

using namespace std;

int main()
{
    list<int> L;

    L.push_front(4);
    L.push_front(3);
    L.push_front(12);
    L.push_back(7);

    list<int> ::iterator it;

    it=L.begin();

    while(it!=L.end())
    {
        cout<<*it<<endl;
        *it++;
    }
    return 0;
}
