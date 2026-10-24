#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>
using namespace std;
int p[105];
int main(){
	int n;cin>>n;
	for(int i=1;i<=n;++i)
		cin>>p[i];
	sort(p+1,p+n+1,[&](int a,int b){
		return a>b;
	});
	p[1]/=2;int ans=0;
	for(int i=1;i<=n;++i){
		ans+=p[i];
	}
	cout<<ans;
	return 0;
}
