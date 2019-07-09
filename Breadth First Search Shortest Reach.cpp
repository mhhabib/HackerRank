#include<bits/stdc++.h>
using namespace std;
#define m 1009
vector<int>v[m];
int vis[m];
int level[m];

void bfs(int s,int n)
{
    queue<int>q;
    memset(vis,0,sizeof(vis));
    memset(level,0,sizeof(level));
    q.push(s);
    vis[s]=1;
    level[s]=0;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int i=0;i<v[u].size();i++){
            int p=v[u][i];
            if(vis[p]==0){
                vis[p]=1;
                level[p]=level[u]+6;
                q.push(p);
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(i!=s){
            if(level[i]==0)
                cout<<-1<<" ";
            else cout<<level[i]<<" ";
        }
    }
    cout<<endl;
}
int main()
{
    int test;
    cin>>test;
    while(test--){
        int node,edge;
        cin>>node>>edge;
        for(int i=0;i<edge;i++){
            int a,b;
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        int source;
        cin>>source;
        bfs(source,node);

        for(int i=0;i<m;i++) v[i].clear();
    }
    return 0;
}
