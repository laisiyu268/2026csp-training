#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>

using namespace std;

struct coins{
	int m;
	int v;
	double val;
}a[101];
int main(){
	int n,T;cin>>n>>T;
	for(int i=1;i<=n;++i){
		cin>>a[i].m>>a[i].v;
		a[i].val=1.0*a[i].v/a[i].m;
	}
	sort(a+1,a+n+1,[&](const coins& x,const coins& y){
		if(x.val!=y.val)
			return x.val>y.val;
		return x.m<y.m;
	});
	double ans=0.0;
	for(int i=1;i<=n;++i){
		if(a[i].m<=T){
			T-=a[i].m;
			ans+=1.0*a[i].v;
		}else{
			ans+=1.0*T*(1.0*a[i].val);
			T=0;
		}
	}
	printf("%.2f",ans);
	return 0;
}
