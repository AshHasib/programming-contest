#include<bits/stdc++.h>

using namespace std;



bool isPerfect(int n)
{
    int i;
    int temp=0;

    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            temp+=i;
        }
    }
    if(temp==n) return true;
    else return false;
}

int main()
{
    int N;
    printf("Enter a number:");
    scanf("%d",&N);
    if(isPerfect(N))
    {
        printf("The number is perfect\n");
    }
    else
    {
        printf("The number is not perfect\n");
    }

    return 0;
}
