#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>

using namespace std;
constexpr int N=101;
int n,m;
char mp[N][N];
int f[N][N],qx[N*N],qy[N*N];
int dx[]={1,0,-1,0,1,1,-1,-1},
	dy[]={0,1,0,-1,1,-1,1,-1};
void bfs(int x,int y){
	memset(qx,0,sizeof(qx));
	memset(qy,0,sizeof(qy));
	qx[1]=x,qy[1]=y;
	int h=0,t=1;
	while(h<t){
		++h;
		for(int i=0,cx,cy;i<8;++i){
			cx=qx[h]+dx[i];
			cy=qy[h]+dy[i];
			if(cx>0&&cx<=n&&cy>0&&cy<=m&&mp[cx][cy]=='W'&&!f[cx][cy]){
				f[cx][cy]=1;
				mp[cx][cy]='.';
				++t;
				qx[t]=cx;qy[t]=cy;
				
			}
		}
	}
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j)
			cin>>mp[i][j];
	}
	int ans=0;
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			if(mp[i][j]=='W'&&!f[i][j]){
				++ans;
				bfs(i,j);
			}
		}
	}
	cout<<ans;
	return 0;
}
