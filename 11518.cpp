
#include<bits/stdc++.h>
using namespace std;
vector<int> adj[10001];
int vis[10001];

int v,c=0;

void dfs(int u){
    vis[u]=1;
    c++;
    for(int i=0; i<adj[u].size(); i++){
        v=adj[u][i];
        if(vis[v]==0){
            dfs(v);
        }
    }
}
int main(){
    int t,n,m,l,x,y,z;
    cin>>t;
    while(t--){
            c=0;
    memset(vis,0,sizeof(vis));
    memset(adj,0,sizeof(adj));
    cin>>n>>m>>l;
    for(int i=0; i<m; i++){
        cin>>x>>y;
        adj[x].push_back(y);
    }
    for(int j=0; j<l; j++){
        cin>>z;
        if(vis[z]==0)
        dfs(z);
    }
    cout<<c<<endl;
    }


return 0;
}
