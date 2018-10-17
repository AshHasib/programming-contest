#include<bits/stdc++.h>

using namespace std;


bool isFib(int n)
{
    int first=0,second=1,third=0;

    while(third<n)
    {
        third=first+second;
        first=second;
        second=third;
    }
    if(third==n) return true;

    else return false;
}

int main()
{
    int N=5;

    if(isFib(N))
    {
        printf("The number is in the fibonacci series\n");
    }
    else printf("The number is not in the fibonacci series\n");

    return 0;
}
