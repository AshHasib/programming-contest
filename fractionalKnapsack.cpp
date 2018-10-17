#include<bits/stdc++.h>

using namespace std;


class Item
{
public:
    double val,wt;


};

bool compare(Item a,Item b)
{
    double rat1=a.val/a.wt;
    double rat2=b.val/b.wt;

    return (rat1>rat2);
}

double knapsack(Item item[],int N,int W)
{
    double currentWt=0,finalVal=0;

    sort(item,item+N,compare);

    for(int i=0;i<N;i++)
    {
        if((currentWt+item[i].wt)<=W)
        {
            currentWt+=item[i].wt;
            finalVal+=item[i].val;
        }
        else
        {
            double remaining=W-currentWt;
            double unitWt=item[i].val/item[i].wt;
            finalVal+=(remaining*unitWt);
            break;
        }
    }
    return finalVal;
}

int main()
{
    Item item[1000];

    int N,i;
    double W;

    printf("Enter the number of items:");
    scanf("%d",&N);

    printf("\n");

    for(i=0;i<N;i++)
    {
        printf("Item %d:\n",i+1);
        printf("Enter value:");
        scanf("%lf",&item[i].val);
        printf("Enter weight:");
        scanf("%lf",&item[i].wt);
    }
    printf("Enter Knapsack capacity : ");
    scanf("%lf",&W);

    printf("The maximum value that can be put into the knapsack is :%.2lf\n",knapsack(item,N,W));

    return 0;
}
