#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define nl cout<<"\n";
string spc=" ";

char ar[110][110];
int vis[110][110];
int n,m;

bool isValid(int x, int y){
    if(x<0 || x>=n || y<0 || y>=m || ar[x][y]=='*'){
        return false;
    }
    if(vis[x][y]==1){
        return false;
    }

    return true;
}

int dx[]={-1,0,1,0,-1,-1,1,1};
int dy[]={0,1,0,-1,-1,1,1,-1};

void dfs(int x, int y){
    vis[x][y]=1;
    for(int i=0;i<8;i++){
        if(isValid(x+dx[i],y+dy[i])){
            dfs(x+dx[i],y+dy[i]);
        }
    }

}





void clear(){
    memset(ar,'0',sizeof(ar));
    memset(vis,0,sizeof(vis));
}


void solve(){
    while(cin>>n>>m){
        clear();
        if(n==0 && m==0){
            return;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>ar[i][j];
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(ar[i][j]=='@' && vis[i][j]==0){
                    dfs(i,j);
                    cnt++;
                }
            }
        }

        cout<<cnt<<'\n';
    }





}





int main()
{
//    #ifndef ONLINE JUDGE
//    freopen("test_input.txt","r",stdin);
//    #endif
    ios::sync_with_stdio(0);  cin.tie(0);
    //int n; cin>>n;
   // while(n--)
        solve();


    return 0;
}
