#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>

using namespace std;

constexpr int N=10;
struct points{
	int a[N]={};
	int len=0;
}mp[N];
bool mp2[N],f[N][N],fp[N];
int n,m,ans;
void dfs(int id,int step){
	if(step==n){
		++ans;
		return;
	}
	for(int i=1;i<=mp[id].len;++i){
		if(!fp[mp[id].a[i]]&&mp[id].a[i]!=1){
			fp[mp[id].a[i]]=1;
			dfs(mp[id].a[i],step+1);
			fp[mp[id].a[i]]=0;
		}
	}
}
int main(){
	n,m;cin>>n>>m;
	for(int i=1,u,v;i<=m;++i){
		cin>>u>>v;
//		mp[u][v]=mp[v][u]=1;
		mp[u].a[++mp[u].len]=v;
		mp[v].a[++mp[v].len]=u;
	}
	/*
	for(int i=1;i<=n;++i){
		cout<<i<<": ";
		for(int k=1;k<=mp[i].len;++k)
			cout<<mp[i].a[k]<<", ";
		cout<<"\n";
	}
	*/
	dfs(1,1);
	cout<<ans;
	return 0;
}
