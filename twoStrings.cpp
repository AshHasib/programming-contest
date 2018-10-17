#include<bits/stdc++.h>
#define MAX 100001
using namespace std;

int main()
{
    char S1[MAX],S2[MAX];

    int A[26],B[26];
    int T;

    scanf("%d",&T);

    while(T--){
        scanf("%s %s",S1,S2);

        for(int i=0;i<26;i++){
            A[i]=B[i]=0;
        }
        for(int i=0;i<strlen(S1);i++){
            A[S1[i]-97]++;
            B[S2[i]-97]++;
        }
        bool flag=true;
        for(int i=0;i<26;i++){
            if(A[i]!=B[i]){
                    flag=false;
                break;
            }
        }
        if(flag==true){
            printf("YES\n");
        }
        else printf("NO\n");
    }
    return 0;
}
