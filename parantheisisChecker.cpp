#include<bits/stdc++.h>

using namespace std;


int main()
{
    char P[100];

    stack<char>S;

    scanf("%s",P);

    int len=strlen(P);
    for(int i=0;i<len;i++) {
        if(P[i]=='('||P[i]=='{'||P[i]=='[') {
            S.push(P[i]);
        }
        else S.pop();
    }
    if(S.empty()) {
        printf("Balanced\n");
    }
    else {
        printf("Not balanced\n");
    }
    return 0;
}
