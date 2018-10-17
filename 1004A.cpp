#include<bits/stdc++.h>
#define lLimit -1000000000
#define uLimit 1000000000
using namespace std;


int main()
{
    int n;
    long long d;
    long long counter=0;

    scanf("%d%lld",&n,&d);

    long long hotel[n];

    for(int i=0;i<n;i++) {
        scanf("%lld",&hotel[i]);
    }

//    if(hotel[0]-d>lLimit) {
//        counter++;
//    }
//    if(hotel[n-1]+d<uLimit) {
//        counter++;
//    }

    for(int i=0;i<n;i++) {
        if((hotel[i+1]-hotel[i])>2*d) {
            counter+=2;
        }
        if(2*d==(hotel[i+1]-hotel[i])) {
            counter++;
        }
    }
    printf("%lld\n",counter);

    return 0;
}
