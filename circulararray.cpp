#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,q;
    scanf("%d%d%d",&n,&k,&q);

    deque<int>D;

    for(int i=0;i<n;i++)
    {
        int temp;
        scanf("%d",&temp);
        D.push_back(temp);
    }
    int qr[q+1];
    for(int i=0;i<q;i++)
    {
        scanf("%d",&qr[i]);
    }

    for(int i=0;i<k;i++)
    {
        int temp=D.back();
        D.pop_back();
        D.push_front(temp);
    }

    deque<int>::iterator it;
    //it=D.begin();

    for(int i=0;i<q;i++)
    {
        it=D.begin();
        it+=qr[i];
        printf("%d\n",*it);
        it=D.begin();
    }

//
//    while(it!=D.end())
//    {
//        printf("%d\n",*it);
//        *it++;
//    }

    return 0;
}
