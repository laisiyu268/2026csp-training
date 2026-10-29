#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>

using namespace std;

constexpr int N=1001;
char mp[N][N];
bool f[N][N];
int sp[N][N],qx[N*N],qy[N*N];
int dx[]={0,1,0,-1},
	dy[]={1,0,-1,0};
int n,sx,sy,ex,ey;
void bfs(){
	int h=0,t=1,cx,cy;
	qx[1]=sx;qy[1]=sy;
	while(h<t){
		++h;
		for(int i=0;i<4;++i){
			cx=qx[h]+dx[i];
			cy=qy[h]+dy[i];
			if(cx>0&&cx<=n&&cy>0&&cy<=n
			   &&!f[cx][cy]&&mp[cx][cy]!='1'){
				++t;
				qx[t]=cx;
				qy[t]=cy;
				f[cx][cy]=1;
				sp[cx][cy]=sp[qx[h]][qy[h]]+1;
			}
		}
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;++i)
		for(int j=1;j<=n;++j)
			cin>>mp[i][j];
	cin>>sx>>sy>>ex>>ey;
	bfs();
	cout<<sp[ex][ey];
	return 0;
}
