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
int dx[]={1,0,-1,0},
	dy[]={0,1,0,-1};
bool f[N][N];
int qx[N*N],qy[N*N];
void bfs(int sx,int sy){
	int h=0,t=1,cx,cy;
	qx[1]=sx,qy[1]=sy;
	while(h<t){
		++h;
		for(int i=0;i<4;++i){
			cx=qx[h]+dx[i];
			cy=qy[h]+dy[i];
			if(cx>0&&cy>0&&cx<=n&&cy<=m
			   &&!f[cx][cy]&&mp[cx][cy]!='0'){
				++t;
				qx[t]=cx;qy[t]=cy;
				f[cx][cy]=1;
			}
		}
	}
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;++i)
		for(int j=1;j<=m;++j)
			cin>>mp[i][j];
	int ans=0;
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			if(mp[i][j]!='0'&&!f[i][j]){
				++ans;bfs(i,j);
			}
				
		}
	}
	cout<<ans;
	return 0;
}
