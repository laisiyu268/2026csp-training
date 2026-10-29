// 34.0/38.0
#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>
#include<set>

using namespace std;

const int N=2e3+1;
char mp[N][N];
bool f[N][N];
int step[N][N],qx[N*N],qy[N*N];
int n,m,sx,sy,ex,ey;
int dx[]={1,0,-1,0},
dy[]={0,1,0,-1};
struct Teleport{
	set<pair<int,int>> a;
}te[27];
void bfs(){
	char ch;
	int h=0,t=1,cx=sx,cy=sy,ccx,ccy;
	qx[1]=sx;qy[1]=sy;
	while(h<t){
		++h;
		for(int i=0,F=1;i<4;++i){
			ch=mp[qx[h]][qy[h]];
			if(F&&ch>='a'&&ch<='z'){
				F=0;
				for(auto it=te[ch-'a'].a.begin();it!=te[ch-'a'].a.end();++it){
					ccx=it->first,ccy=it->second;
					if(f[ccx][ccy]) continue;
					if(ccx!=qx[h]||ccy!=qy[h]){
						++t;
						f[ccx][ccy]=1;
						qx[t]=ccx;
						qy[t]=ccy;
						step[ccx][ccy]=step[qx[h]][qy[h]]+1;
					}else{
						cx=qx[h]+dx[i];
						cy=qy[h]+dy[i];
						ch=mp[cx][cy];
						if(cx>0&&cx<=n&&cy>0&&cy<=m
						   &&ch!='#'&&!f[cx][cy]){
							++t;
							f[cx][cy]=1;
							qx[t]=cx;
							qy[t]=cy;
							step[cx][cy]=step[qx[h]][qy[h]]+1;
						}
					}
				}
				--i;
			}else{
				cx=qx[h]+dx[i];
				cy=qy[h]+dy[i];
				ch=mp[cx][cy];
				if(cx>0&&cx<=n&&cy>0&&cy<=m
				   &&ch!='#'&&!f[cx][cy]){
					++t;
					f[cx][cy]=1;
					qx[t]=cx;
					qy[t]=cy;
					step[cx][cy]=step[qx[h]][qy[h]]+1;
				}
			}
		}
	}
}
int main(){
	cin>>n>>m;
	char ch;
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			cin>>mp[i][j];ch=mp[i][j];
			if(ch=='S')
				sx=i,sy=j;
			else if(ch=='G')
				ex=i,ey=j;
			else if(ch>='a'&&ch<='z'){
				te[ch-'a'].a.insert(make_pair(i,j));
			}
		}
	}
	bfs();
	cout<<(step[ex][ey]? step[ex][ey]:-1);
	return 0;
}
