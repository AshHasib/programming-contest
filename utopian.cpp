#include<bits/stdc++.h>

using namespace std;


int main() {
    int T;
    scanf("%d",&T);

    int N;

    for(int i=1;i<=T;i++){
        scanf("%d",&N);

        int c=1;

        for(int j=1;j<=N;j++){
            if(j%2==0){
                c+=1;
            }
            else {
                c*=2;
            }
        }
        printf("%d\n",c);
    }
}
