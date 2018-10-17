#include<bits/stdc++.h>

using namespace std;


int binarySearch(int ar[],int l,int h,int key)
{

    if(l<=h)
    {
        int mid=(l+h)/2;

        if(ar[mid]==key)
        {
            return mid;
        }
        else if(ar[mid]<key)
        {
            return binarySearch(ar,mid+1,h,key);
        }
        else
        {
            return binarySearch(ar,l,mid-1,key);
        }
    }
    return -999;
}


int main()
{
    int A[100];
    int N,key;

    printf("Enter the size of array:");
    scanf("%d",&N);

    printf("Enter elements:");
    for(int i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter key value:");
    scanf("%d",&key);

    int loc=binarySearch(A,0,N-1,key);

    if (loc!=-999) printf("The element is in :%d\n",loc);
    else printf("Element not found\n");
    return 0;
}
