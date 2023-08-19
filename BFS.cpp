#include<bits/stdc++.h>//只是一个题的模板
using namespace std;
int g[5005][5005],vis[5005],dis[5005];
int m,n,s,t;
void bfs(int x){
    queue<int> q;
    vis[x]=1;
    q.push(x);
    dis[x]=0;
    while(!q.empty())
    {
        int cur=q.front();
        q.pop();
        for(int i=1;i<=m;i++)
        {
            if(g[cur][i]==1&&vis[i]==0)
            {
                q.push(i);
                vis[i]=1;
                dis[i]=dis[cur]+1;
            }
        }
    }
    return ;
}
int main()
{
    cin>>m>>n>>s>>t;
    int x,y;
    for(int i=1;i<=n;i++)
    {
        cin>>x>>y;
        g[x][y]=1;
        g[y][x]=1;
    }
    bfs(s);
    if(dis[t]==0)
      cout<<"No path"<<endl;
    else
      cout<<dis[t]<<endl;  
    return 0;
}
