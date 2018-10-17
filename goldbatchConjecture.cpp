#include<bits/stdc++.h>
#define MAX 100000
using namespace std;


vector <int> P;

void sieve()
{
    bool primes[MAX+1];

    memset(primes,true,MAX+1);

    primes[1]=false;
    int root=sqrt(MAX);
    for(int i=2;i<root;i++)
    {
        if(primes[i])
        {
            for(int j=2;i*j<=MAX;j++)
            {
                primes[i*j]=false;
            }
        }
    }

    for(int i=1;i<=MAX;i++)
    {
        if(primes[i])
        {
            P.push_back(i);
        }
    }
}

int main()
{
    sieve();
    printf("This is the proof of Goldbatch's conjecture. It will take an even number and express it is a sum of two primes\n\n");
    int num;
    printf("Enter a number:");

    scanf("%d",&num);

    if(num<=2)
    {
        printf("Try with a greater number. . . \n");
        return 0;
    }
//    if(num%2!=0)
//    {
//        printf("Try an even number\n");
//    }


    int pos=0;
    int i=P[pos];
    bool flag=false;
    while(i<(num/2))
    {
        int temp=num-i;

        if(binary_search(P.begin(),P.end(),temp))
        {
            printf("%d = %d + %d\n",num,i,temp);
            flag=true;
            break;
        }

        pos++;
        i=P[pos];
    }

    if(!flag)
    {
        printf("The number can not be expressed as a sum of two primes\n");
    }
    return 0;
}
