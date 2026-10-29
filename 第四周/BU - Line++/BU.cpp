// 6.0/15.0
#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>

using namespace std;
constexpr int N=2e3+1;
int mp[N][N],cnt[N];
int n,x,y;
void work(){
	// 相邻边互联,单点为0
	for(int i=1;i<=n;++i){
		mp[i][i+1]=mp[i+1][i]=1;
		mp[i][i]=0;
	}
	// 1~x,与x~(x+y)/2对应; y~n与(x+y)/2+1~y对应
	for(int i=x,j=y;i<=j;++i,--j){
		mp[i][x]=mp[x][i]=i-x;
		mp[j][y]=mp[y][j]=y-j;
		for(int k=x-1;k>0;--k){
			mp[i][k]=mp[k][i]=(i-k);
		}
		for(int k=y+1;k<=n;++k){
			mp[j][k]=mp[k][j]=(k-j);
		}
	}
	// 1~x 与(x+y)/2+1~y联系;y~n 与x~(x+y)/2联系
	for(int i=x-1;i>0;--i)
		for(int k=y;k>(x+y)/2;--k)
			mp[i][k]=mp[k][i]=(x-i)+1+(y-k);
	for(int i=y+1;i<=n;++i)
		for(int k=x;k<(x+y)/2;++k)
			mp[i][k]=mp[k][i]=(i-y)+1+(k-x);
	// 1~x 与 y~n联系
	for(int i=1;i<=x;++i)
		for(int j=y;j<=n;++j)
			mp[i][j]=mp[j][i]=(j-i)-(y-x)+1;
	// x~y内部路径联系
	for(int i=x;i<=(x+y)/2;++i){
		for(int j=(x+y)/2+1;j<=y;++j){
			mp[i][j]=mp[j][i]=
			min(mp[i][(x+y)/2]+j-((x+y)/2+1)+1
			,mp[i][x]+1+(y-j));
		}
	}
	// 处理1~x,y~n的内部路径
	for(int i=1;i<x;++i)
		for(int j=i+1;j<=x;++j)
			mp[i][j]=mp[j][i]=j-i;
	for(int i=y;i<n;++i)
		for(int j=i+1;j<=n;++j)
			mp[i][j]=mp[j][i]=j-i;
	// x~(x+y)/2,(x+y)/2+1~y内部路径
	for(int i=x;i<(x+y)/2;++i)
		for(int j=i+1;j<=(x+y)/2;++j)
			mp[i][j]=mp[j][i]=j-i;
	for(int i=(x+y)/2+1;i<n;++i)
		for(int j=i+1;j<=n;++j)
			mp[i][j]=mp[j][i]=j-i;
	
}
void print(){
	for(int i=1;i<n;++i)
		for(int j=i+1;j<=n;++j)
			++cnt[mp[i][j]];
	for(int i=1;i<n;++i)
		printf("%d\n",cnt[i]);
}
int main(){
	cin>>n>>x>>y;
	mp[x][y]=mp[y][x]=1;
	work();print();
	return 0;
}
