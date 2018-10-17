#include<bits/stdc++.h>

using namespace std;

int Max(int a,int b)
{
    return ((a>b)?a:b);
}

int Max(int a,int b,int c)
{
    return Max(Max(a,b),c);
}

int maxCross(int a[],int low,int mid, int high)
{
    int sum=0;
    int leftSum=INT_MIN;

    for(int i=mid;i>=low;i--)
    {
        sum+=a[i];
        if(sum>leftSum)
        {
            leftSum=sum;
        }
    }

    sum=0;
    int rightSum=INT_MIN;

    for(int i=mid+1;i<=high;i++)
    {
        sum+=a[i];
        if(sum>rightSum)
        {
            rightSum=sum;
        }
    }

    return (leftSum+rightSum);

}

int maxSum(int a[],int low,int high)
{
    if(low==high)
    {
        return a[low];
    }

    int mid=(low+high)/2;

    return (maxSum(a,low,mid),maxSum(a,mid+1,high),maxCross(a,low,mid,high));
}

int main()
{
    int N;
    printf("Enter the size of the array:");
    scanf("%d",&N);

    int A[N];
    printf("Enter elements:");

    for(int i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }

    int res=maxSum(A,0,N-1);

    printf("The largest sum is : %d\n",res);

    return 0;
}
