#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>
#include<map>
using namespace std;
map<string,int> s,t,tot;
int main(){
	int n,m;string tmp;
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>tmp;
		++s[tmp];
		tot[tmp]=1;
	}
	cin>>m;
	for(int i=1;i<=m;++i){
		cin>>tmp;
		++t[tmp];
		tot[tmp]=1;
	}
	int maxn=0;
	for(auto it=tot.begin();it!=tot.end();++it){
		tmp=it->first;
		maxn=max(maxn,s[tmp]-t[tmp]);
	}cout<<maxn;
	return 0;
}
