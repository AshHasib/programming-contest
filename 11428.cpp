#include<bits/stdc++.h>

using namespace std;


int main()
{
    //freopen("input.txt","r",stdin);
    int N,i,j;
    int x,y;
    while(scanf("%d",&N) && (N!=0))
    {
        bool flag=false;
        y=100000;
        for(i=1;i<=100;i++)
        {
            for(j=1;j<=i;j++)
            {
                if(i*i*i-j*j*j==N && j<y)
                {
                    x=i;
                    y=j;
                    flag=true;
                }
            }
        }
        if(flag)
        {
            printf("%d %d\n",x,y);
        }
        else{
            printf("No solution\n");
        }
    }
    return 0;
}
