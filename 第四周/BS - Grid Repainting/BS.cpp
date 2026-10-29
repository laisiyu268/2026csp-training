#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>

using namespace std;

const int N=51;
int H,W;
char mp[N][N];
int dx[]={1,0,-1,0},
	dy[]={0,1,0,-1};
int qx[N*N],qy[N*N],ans[N][N];
bool f[N][N];
void bfs(){
	int h=0,t=1;
	qx[1]=1;qy[1]=1;
	while(h<t){
		++h;
		for(int i=0,cx,cy;i<4;++i){
			cx=qx[h]+dx[i];
			cy=qy[h]+dy[i];
			if(cx>0&&cy>0&&cx<=H&&cy<=W&&
			   !f[cx][cy]&&mp[cx][cy]=='.'){
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
	cin>>H>>W;
	int cnt=1;
	for(int i=1;i<=H;++i){
		for(int j=1;j<=W;++j){
			cin>>mp[i][j];
			if(mp[i][j]=='#')
				++cnt;
		}
	}
	bfs();
	if(ans[H][W]){
		cout<<H*W-cnt-ans[H][W];
	}else{
		cout<<-1;
	}
	
	return 0;
}
