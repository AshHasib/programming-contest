#include<bits/stdc++.h>

using namespace std;


int main()
{
    int c[10];
    int num[6];

    for(int i=0;i<10;i++)
    {
        c[i]=0;
    }
    for(int i=0;i<6;i++)
    {
        scanf("%d",&num[i]);
        c[num[i]]++;
    }
    for(int 0;i<10;i++)
    {
        if(c[i]==4) {

        }
        else {
            printf("Alien\n");
        }
    }
}
