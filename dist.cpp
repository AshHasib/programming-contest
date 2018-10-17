#include<bits/stdc++.h>

using namespace std;


double distance(double x1, double y1,double x2,double y2)
{
    double t=(x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);

    return (sqrt(t));
}

int main()
{
    printf("%lf\n",distance(1,5,3,5));
    printf("%lf\n",distance(2,4,1,6));
    printf("%lf\n",distance(3,3,7,2));
    printf("%lf\n",distance(1,3,5,1));
    printf("%lf\n",distance(2,4,2,2));
}
