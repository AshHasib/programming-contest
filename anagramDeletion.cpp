#include<bits/stdc++.h>
#define MAX 10001
using namespace std;


int main(){
    int T;
    char S1[MAX],S2[MAX];

    //int A[26]B[26];

    scanf("%d",&T);

    while(T--){
        gets(S1);
        gets(S2);
        int A[26]={0};
        int B[26]={0};
        for(int i=0;i<strlen(S1);i++){
            A[S1[i]-97]++;
        }
        for(int i=0;i<strlen(S2);i++){
            B[S2[i]-97]++;
        }


        int j=0;
        int counter=0;
        //bool stillOk=true;
        for(int i=0;i<26;i++){
            counter+=A[i]-B[i];
        }

        printf("%d\n",counter);
    }

}
