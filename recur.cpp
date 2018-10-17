#include<bits/stdc++.h>

using namespace std;


void func(int n)
{
    if(n>100) return;

    func(n+1);


    printf("%d\n",n);
}

int main()
{
    int n=1;

    func(n);

    return 0;
}
