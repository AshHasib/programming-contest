#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a=27,b=3;

    int i=2;

    while(a%2==0 && b%2==0)
    {
        a/=2;
        b/=2;
    }
    while(i<=a ||i<=b){
        if(a%i==0 && b%i==0)
        {
            a/=i;
            b/=i;
        }
        else
        {
            i++;
        }
    }
    printf("%d/%d\n",a,b);
}
