#include<bits/stdc++.h>
using namespace std;




vector<int> maxCrossingSum(int a[],int low,int mid,int high)
{
    int left_sum=INT_MIN;
    int right_sum=INT_MIN;
    int sum=0;
    int left_pos,right_pos;

    for(int i=mid;i>=low;i--)
    {
        sum+=a[i];
        if(sum>left_sum)
        {
            left_sum=sum;
            left_pos=i;
        }
    }
    sum=0;

    for(int j=mid+1;j<=high;j++)
    {
        sum+=a[j];
        if(sum>right_sum)
        {
            right_sum=sum;
            right_pos=j;
        }
    }

    vector<int> ret;
    ret.push_back(left_pos);
    ret.push_back(right_pos);
    ret.push_back(left_sum+right_sum);
    return ret;
}

vector<int>maxSubarraySum(int a[],int low,int high)
{
    if(low==high)
    {
        vector<int> ret;
        ret.push_back(low);
        ret.push_back(high);
        ret.push_back(a[low]);
        return ret;
    }
    else
    {
        int mid=(low+high)/2;

        vector<int>left,right,cross;

        left=maxSubarraySum(a,low,mid);
        right=maxSubarraySum(a,mid+1,high);
        cross=maxCrossingSum(a,low,mid,high);

        if(left[2]>=right[2] && left[2]>=cross[2])
        {
            return left;
        }
        if(right[2]>=left[2] && right[2]>=cross[2])
        {
            return right;
        }
        if(cross[2]>=left[2] && cross[2]>=right[2])
        {
            return cross;
        }
    }
}


int main()
{
    int N;
    vector<int> result; //result[0]= lower index, result[1] = upper index, result[2]= sum

    printf("Enter the number of elements:");
    scanf("%d",&N);

    int A[N+1];

    printf("Enter elements:");
    for(int i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }

    result=maxSubarraySum(A,0,N-1);

    printf("Starting index : %d\n",result[0]);
    printf("Ending index : %d\n",result[1]);
    printf("Maximum summation : %d\n",result[2]);

    return 0;
}
