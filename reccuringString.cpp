#include<bits/stdc++.h>

using namespace std;

char check(char str[])
{
    set<char>S;

    int len=strlen(str);

    for(int i=0;i<len;i++)
    {
        if(S.find(str[i])==S.end())
        {
            S.insert(str[i]);
        }
        else
        {
            return str[i];
        }
    }
    return '@';
}

int main()
{
    char str[1000];
    int T;

    scanf("%d",&T);

    while(T--)
    {
        scanf("%s",str);

        if(check(str)=='@')
        {
            printf("None\n");
        }
        else
        {
            printf("%c\n",check(str));
        }
    }
    return 0;
}
