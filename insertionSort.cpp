#include<bits/stdc++.h>

using namespace std;


int main()
{
    int A[1000]={0};
    int N;
    int key;

    scanf("%d",&N);

    for(int i=1;i<=N;i++)
    {
        scanf("%d",&A[i]);
    }

    for(int j=2;j<=N;j++)
    {
        key=A[j];

        int i=j-1;

        while((i>0)&&(A[i]>key)){
            A[i+1]=A[i];
            i--;
        }
        A[i+1]=key;
    }

    for(int i=1;i<=N;i++){
        printf("%d\t",A[i]);
    }

    return 0;
}
