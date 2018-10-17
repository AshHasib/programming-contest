#include<bits/stdc++.h>

using namespace std;

double distance(double x1, double y1,double x2,double y2)
{
    double t=(x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);

    return (sqrt(t));
}

int main()
{
    int N;
    int loc=0;
    scanf("%d",&N);
    int p[N+1];

    double x1[N+1],y1[N+1],x2[N+1],y2[N+1];

    for(int i=0;i<N;i++)
    {
        scanf("%lf%lf%lf%lf",&x1[i],&y1[i],&x2[i],&y2[i]);
        scanf("%d",&p[i]);
    }

    double current=999999;
    double dist=999999;

    for(int i=0;i<N;i++)
    {
        if((x1[i]==0 &&y1[i]==0) || (x2[i]==0 && y2[i]==0))
        {
            loc=i;
            dist=distance(x1[i],y1[i],x2[i],y2[i]);
            break;
        }

        current=distance(x1[i],y1[i],x2[i],y2[i]);

        if(current<dist && p[i])
        {
            dist=current;
            loc=i;
        }
    }

    printf("%d\n",loc+1);
    printf("%.2lf\n", dist);

    return 0;
}
