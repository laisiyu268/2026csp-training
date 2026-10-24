#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>

using namespace std;

constexpr int N=1e3+5;
int k[N],p[N],f[N*10];
int main(){
	int n,R;cin>>n>>R;
	for(int i=1;i<=n;++i){
		cin>>k[i]>>p[i];
	}
	for(int i=1;i<=n;++i){
		for(int j=R;j>=p[i];--j)
			f[j]=max(f[j],f[j-p[i]]+k[i]);
	}
	cout<<f[R];
	return 0;
}
