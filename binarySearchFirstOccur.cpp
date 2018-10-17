#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N;

    printf("Enter the size of the Array:");
    scanf("%d",&N);

    int A[N+1];

    printf("Enter elements:");

    for(int i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }

    int key;
    printf("Enter key value:");
    scanf("%d",&key);

    int low=0,high=N-1;
    int mid;
    int temp=-1;

    while(low<=high) {
        mid=(low+high)/2;
        if(A[mid]==key) {
            temp=mid;
            high=mid-1;
        }
        else if(A[mid]<key){
            low=mid+1;
        }
        else {
            high=mid-1;
        }
    }
    if(temp!=-1) {
        printf("Data 1st found in %d\n",temp);
    }
    else {
        printf("Not found\n");
    }
    return 0;
}
