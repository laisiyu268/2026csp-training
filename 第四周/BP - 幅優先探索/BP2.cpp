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
int dx[]={1,0,-1,0},
dy[]={0,1,0,-1};
bool f[N][N];
int qx[N*N],qy[N*N],
	ans[N][N];

void bfs(){
	int h=0,t=1;
	while(h<t){
		++h;
		for(int i=0,cx,cy;i<4;++i){
			cx=qx[h]+dx[i];
			cy=qy[h]+dy[i];
			if(cx>0&&cx<=R&&cy>0&&cy<=C
			   &&!f[cx][cy]&&mp[cx][cy]=='.'){
				++t;
				f[cx][cy]=1;
				qx[t]=cx;
				qy[t]=cy;
				ans[cx][cy]=ans[qx[h]][qy[h]]+1;
			}
		}
	}
}
int main(){
	cin>>R>>C>>sx>>sy>>ex>>ey;
	for(int i=1;i<=R;++i){
		for(int j=1;j<=C;++j)
			cin>>mp[i][j];
	}
	qx[1]=sx;qy[1]=sy;
	bfs();
	cout<<ans[ex][ey]<<endl;
	return 0;
}
// bfs
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
