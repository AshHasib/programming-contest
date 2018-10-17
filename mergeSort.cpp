#include<bits/stdc++.h>
#define MAX 1000000
using namespace std;

int temp[MAX];

void Merge(int a[], int low,int mid, int high)
{

    printf("\n\nInside Merge function_______ low = %d, high = %d\n",low,high);
    int i=low;
    int k=low;
    int j=mid+1;

    while(i<=mid && j<=high)
    {
        if(a[i]<a[j])
        {
            temp[k++]=a[i++];
        }
        else
        {
            temp[k++]=a[j++];
        }
    }

    while(i<=mid)
    {
        temp[k++]=a[i++];
    }
    while(j<=high)
    {
        temp[k++]=a[j++];
    }

    for(k=low;k<=high;k++)
    {
        a[k]=temp[k];
    }
}


void mergeSort(int a[],int low,int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        printf("\n\nInside MergeSort(), low = %d, high = %d, mid= %d\n",low,high,mid);
        mergeSort(a,low,mid);
        mergeSort(a,mid+1,high);

        Merge(a,low,mid,high);
    }
}

int main()
{
    clock_t st,et;
    int N;
    printf("Enter the size of the array:");
    scanf("%d",&N);

    int A[N+1];
    printf("Randomly generated array:\n\n");
    for(int i=1;i<=N;i++)
    {
        A[i]=rand();
        printf("%d\t",A[i]);
    }

    printf("\n\nPerforming Mergesort on the array:\n\n");

    st=clock();
    mergeSort(A,1,N);
    et=clock();

    printf("Sorted array:\n\n");
    for(int i=1;i<=N;i++)
    {
        printf("%d\t",A[i]);
    }
    cout<<endl;
    double mergeSortTime=(double)(et-st)/CLOCKS_PER_SEC;

    printf("Taken time for Mergesort:%lf\n",mergeSortTime);
    return 0;
}
