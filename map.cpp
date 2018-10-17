#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<string,int>M;
    map<string,int>::iterator it;
    M["Mark"]=1;
    M["Stu"]=2;
    //M["John"]=3;
    //alternative way
    M.insert(make_pair("John",3));

    printf("%d\n",M["Stu"]);

    it=M.begin();

    cout<<it->first<<endl;

    for(it=M.begin();it!=M.end();it++)
    {
        cout<<it->first <<" "<<it->second<<endl;
    }
    return 0;
}
