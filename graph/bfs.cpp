const int N = 1e5 +10;
vector<int> g[N];
int vis[N];
int level[N];
void bfs(int source){
	queue<int> q;
	q.push(source);
	vis[source] =1;

	while(!q.empty()){
		int cur_v= q.front();
		q.pop();
		for(int child : g[cur_v]){
			if(!vis[child]){
				q.push(child);
				vis[child] =1;
			                level[child] =level[cur_v] + 1;
			}
		}
	}
}
