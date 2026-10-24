#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>
using namespace std;
int st[100];
int main(){
	int n,m,ans=0;cin>>n>>m;
	for(int i=1,k,a;i<=n;++i){
		cin>>k;
		for(int j=1;j<=k;++j){
			cin>>a;
			++st[a];
		}
	}
	for(int i=1;i<=m;++i){
		if(st[i]==n)
			++ans;
	}
	cout<<ans;
	return 0;
}
