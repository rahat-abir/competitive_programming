const int N= 1e5+10;
vector<int> adj[N];
bool vis[N];
bool dfs(int v,int par){
        vis[v] = true;
        for(int i = 0; i < adj[v].size(); ++i){
            int child = adj[v][i];
            if(!vis[child]){
                if(dfs(child,v)) return true;
            }
            else if(par != child){
                return true;
            }
        }
        return false;
}
