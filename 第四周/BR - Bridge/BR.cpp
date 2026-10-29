#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>
#include<set>

using namespace std;

constexpr int N=51;
struct points{
	set<int> a;
	int len;
}mp[N];
bool mp2[N],f[N][N],fp[N];
int n,m,ans;
void dfs(int id,int step){
	if(mp[id].len==1){
//		cout<<id<<"\n";
		++ans;
		--mp[id].len;
		auto it=mp[id].a.begin();
		--mp[*it].len;
		mp[*it].a.erase(id);
		if(!fp[*it]&&mp[*it].len){
			mp[id].a.clear();
			fp[id]=1;
			dfs(*it,step+1);
//			fp[mp[id].a[1]]=0;
		}
		mp[id].a.clear();
	}
}
int main(){
	n,m;cin>>n>>m;
	for(int i=1;i<=n;++i){
		mp[i].len=0;
		mp[i].a.clear();
	}
	for(int i=1,u,v;i<=m;++i){
		cin>>u>>v;
		mp[u].a.insert(v);
		++mp[u].len;
		++mp[v].len;
		mp[v].a.insert(u);
	}
	/*
	for(int i=1;i<=n;++i){
		cout<<i<<": ";
		for(auto it=mp[i].a.begin();it!=mp[i].a.end();++it)
			cout<<*it<<", ";
		cout<<"\n";
	}
	*/
	for(int i=1;i<=n;++i) dfs(i,1);
	cout<<ans;
	return 0;
}
