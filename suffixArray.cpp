#include<bits/stdc++.h>

using namespace std;


int main()
{
    vector< pair<string,int> >V;

    string S="mississippi";

    for(int i=0;i<S.size();i++)
    {
        V.push_back({S.substr(i),i});
    }
    sort(V.begin(),V.end());

    for(int i=0;i<V.size();i++)
    {
        cout<<V[i].second<<" "<<V[i].first<<endl;
    }
    return 0;
}
