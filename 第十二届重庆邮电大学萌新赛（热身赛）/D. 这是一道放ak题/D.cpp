#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>

using namespace std;

typedef long long ll;
constexpr ll M=998244353;
ll work(int n){
	if(n==1||n==2)
		return 1;
	if(n==3)
		return 2;
	ll p1=1ll,p2=1ll,p3=0ll;
	for(int i=3;i<=n;++i){
		p3=(p1+p2)%M;
		p1=p2;
		p2=p3;
	}
	return p3%M;
}
int main(){
	int n;cin>>n;
	cout<<work(n);
	return 0;
}
