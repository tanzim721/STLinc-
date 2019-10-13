#include<bits/stdc++.h>
using namespace std;
typedef pair<int ,int>PII;
vector<string >vertexName;
map<string,int>vertexNumbers;
int main()
{

    freopen("topology.txt","r",stdin);
    int vertex,edge;
    cin>>vertex>>edge;
    vector<PII>v[vertex];

    for(int i=0;i<vertex;i++)
    {

        string str;
        cin>>str;
        vertexName.push_back(str);
        vertexNumbers[str] = i;

    }
    for(int i=0;i<edge;i++)
    {
        string str1,str2;
        cin>>str1>>str2;
        int source;
        PII p;
        source = vertexNumbers[str1];
        p.first = vertexNumbers[str2];
        cin>>p.second;
        v[source].push_back(p);

    }
    for(int i=0;i<vertex;i++)
    {
        cout<<vertexName[i]<<"--";
        for(int j=0;j<v[i].size();j++)
        {
            cout<<vertexName[v[i][j].first]<<"-"<<v[i][j].second<<"-";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
