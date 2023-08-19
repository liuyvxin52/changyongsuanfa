#include<iostream>//只是一个题的模板
using namespace std;
int g[10][10],vis[10][10],n,m,ans=0;
int sx,sy,fx,fy;
int dx[4]={-1,1,0,0},dy[4]={0,0,-1,1};
void dfs(int x,int y)
{
    if(x==n&&y==m)
    {
        ans++;
        return ;
    }
    for(int i=0;i<4;i++)
    {
        int nx=x+dx[i],ny=y+dy[i];
        if(nx<1||nx>n||ny<1||ny>m)
          continue;
        if(vis[nx][ny]==0)
        {
            vis[nx][ny]=1;
            dfs(nx,ny);
            vis[nx][ny]=0;
        }

    }
}
int main()
{
    cin>>n>>m;
    vis[1][1]=1;
    dfs(1,1);
    cout<<ans<<endl;   
    return 0;
}
