#include<bits/stdc++.h>

using namespace std;

int main()
{
    deque<int>D;

    D.push_back(3);
    D.push_back(4);
    D.push_back(5);
    D.push_back(6);
    D.push_front(1);

    deque<int>::iterator it;
    it=D.begin();

    while(it!=D.end())
    {
        printf("%d\n",*it);
        *it++;
    }
    printf("%d\n",D.front());
}
