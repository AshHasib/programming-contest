#include<bits/stdc++.h>
#define long long LL

using namespace std;


int main()
{
    int i,j;

    while(scanf("%d%d",&i,&j)!=EOF)
    {
        int t_i=i,t_j=j;
        if(i>j) swap(i,j);
        int maximum=0;
        while(i<=j)
        {
            unsigned int n=i;
            unsigned int counter=1;
            while(n!=1)
            {
                if(n%2==1) n=3*n+1;
                else n/=2;
                counter++;
            }
            if(counter>maximum)
            {
                maximum=counter;
            }
            i++;
        }
        printf("%d %d %d\n",t_i,t_j,maximum);
    }
    return 0;
}
