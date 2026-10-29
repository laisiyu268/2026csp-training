#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>

using namespace std;

constexpr int N=101;
struct roads{
	int c;
	int t;
}r[N];
int main(){
	int N,T;cin>>N>>T;
	for(int i=1;i<=N;++i){
		cin>>r[i].c>>r[i].t;
	}
	sort(r+1,r+N+1,[&](const roads& x,const roads& y){
		if(x.t<=T&&y.t<=T){
			return x.c<y.c;
		}else{
			return x.t<y.t;
		}
	});
	if(r[1].t<=T) cout<<r[1].c;
	else cout<<"TLE";
	return 0;
}
