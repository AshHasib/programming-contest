#include<bits/stdc++.h>

using namespace std;


int main()
{
    int N;
    scanf("%d",&N);
    int A[N];

    int target;

    for(int i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }
    scanf("%d",&target);

    int i=0;
    int j=N-1;

    while(i<j)
    {
        if(A[i]+A[j]==target)
        {
            //printf("%d and %d",i,j);
            break;
        }
        else if(A[i]+A[j]<target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    if(i==j) printf("No matching pair\n");

    else printf("%d and %d\n",i,j);

    return 0;
}
