const int N= 1e5+10;
vector<int> g[N];
bool vis[N];
void dfs(int vertex){//after entering the vertex
	vis[vertex] = true;
	for(int child : g[vertex]){
		//after entering child
		if(vis[child]) continue;
		dfs(child);
//before exitinng the child
	}
}
