#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);

    int height[n+1];
    int temp=0,m=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&height[i]);
        if(height[i]>m) {
            m=height[i];
        }
    }

    if(m>k) {
        temp=m-k;
    }
    printf("%d\n",temp);

    return 0;
}
