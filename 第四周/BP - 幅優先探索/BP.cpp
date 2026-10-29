#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>

using namespace std;
constexpr int N=51;
int R,C,sx,sy,ex,ey;
char mp[N][N];
int minn=N*N*N*N;
int dx[]={1,0,-1,0},
	dy[]={0,1,0,-1};
bool f[N][N];
void dfs(int x,int y,int step){
	if(step>=minn){
		return;
	}
	if(x==ex&&y==ey){
		minn=min(minn,step);
		return;
	}
	for(int i=0,cx,cy;i<4;++i){
		cx=x+dx[i];
		cy=y+dy[i];
		if(x==ex&&y==ey){
			minn=min(minn,step);
			return;
		}
		if(cx>0&&cy>0&&cx<=R&&cy<=C&&mp[cx][cy]=='.'&&!f[cx][cy]){
			f[x][y]=1;
			dfs(cx,cy,step+1);
			f[x][y]=0;
		}
	}
}
int main(){
	cin>>R>>C>>sx>>sy>>ex>>ey;
	for(int i=1;i<=R;++i){
		for(int j=1;j<=C;++j)
			cin>>mp[i][j];
	}
	dfs(sx,sy,0);
	cout<<minn<<endl;
	return 0;
}
// dfs
/*
5 8
2 2
2 4
########
#.#....#
#.###..#
#......#
########
*/
