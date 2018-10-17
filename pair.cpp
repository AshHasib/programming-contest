#include<bits/stdc++.h>

using namespace std;

int main()
{
    pair<string,int>P;
    P=make_pair("a",2);

    cout<<P.first<<" "<<P.second<<endl;

    vector< pair<string,int> >V;

    V.push_back(make_pair("a",3));
    V.push_back(make_pair("b",1));
    V.push_back(make_pair("c",2));
    V.push_back(make_pair("d",4));

    for(int i=0;i<V.size();i++)
    {
        cout<<V[i].first<<" "<<V[i].second<<endl;
    }
}
