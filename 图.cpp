#include<iostream>//无向图
using namespace std;
int g[105][105]={0};
int n,m;
int main()
{
    cin>>n>>m;
    int u,v;
    for(int i=1;i<=m;i++)
    {
        cin>>u>>v;
        g[u][v]=1;
        g[v][u]=1;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }
}
