#include<bits/stdc++.h>

using namespace std;


vector<int>getVector(string str)
{
    vector<int>num;
    int t=0;
    int sz=str.size();

    for(int i=0;i<sz;i++)
    {
        if(str[i]!=' ')
        {
            t=t*10+(str[i]-'0');
        }
        if(str[i]==' ' || i==sz-1)
        {
            if(t!=0)
            {
                //printf("Calculated");
                num.push_back(t);
                t=0;
            }
        }
    }
    return num;
}

int gcd(int a,int b)
{
    if(b==0) return a;
    else return gcd(b,a%b);
}

int main()
{
    //freopen("input.txt","r",stdin);

    vector<int>numList;
    string str;
    int T;

    scanf("%d",&T);
    getchar();
    for(int i=1;i<=T;i++)
    {
        getline(cin,str);
        int res=0;
        numList=getVector(str);
        int sz=numList.size();
        for(int i=0;i<sz;i++)
        {
            for(int j=i+1;j<sz;j++)
            {
                int x=numList[i];
                int y=numList[j];

                if(numList[i]<numList[j])
                {
                    x=numList[j];
                    y=numList[i];
                }

                int g=gcd(x,y);
                if(g>res)
                {
                    res=g;
                }
            }
        }
        printf("%d\n",res);
    }
    return 0;
}
