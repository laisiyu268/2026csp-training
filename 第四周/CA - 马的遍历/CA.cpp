#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>

using namespace std;

constexpr int N=401;
int n,m,sx,sy;
bool f[N][N];
int dx[]={2,1,2,1,-2,-1,-2,-1},
	dy[]={1,2,-1,-2,1,2,-1,-2};
int ans[N][N],qx[N*N],qy[N*N];
void bfs(){
	int h=0,t=1,cx,cy;
	qx[1]=sx,qy[1]=sy;
	while(h<t){
		++h;
		for(int i=0;i<8;++i){
			cx=qx[h]+dx[i];
			cy=qy[h]+dy[i];
			if(cx>0&&cx<=n&&cy>0&&cy<=m
			   &&!f[cx][cy]){
				++t;
				qx[t]=cx;qy[t]=cy;
				f[cx][cy]=1;
				ans[cx][cy]=ans[qx[h]][qy[h]]+1;
			}
		}
	}
}
int main(){
	cin>>n>>m>>sx>>sy;
	bfs();
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j)
			if(i==sx&&j==sy){
				cout<<"0 ";
			}else{
				cout<<(ans[i][j]? ans[i][j]:-1)<<" ";
			}
			
		cout<<"\n";
	}
	return 0;
}
