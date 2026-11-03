#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>
#include<cmath>

using namespace std;

constexpr int N=105;
bool f[N];
int p[N],top=0;
int main(){
	int x,n,maxn=0;cin>>x>>n;
	for(int i=1,a;i<=n;++i){
		cin>>a;
		f[a]=1;
		maxn=max(maxn,a);
	}
	for(int i=1;i<N;++i){
		if(!f[i])
			p[++top]=i;
	}
//	for(int i=1;i<=top;++i) cout<<p[i]<<", ";cout<<"\n";
	sort(p+1,p+top+1);
	int k=lower_bound(p+1,p+top+1,x)-p;
	if(k>top){
		cout<<p[top];
	}
	else if(p[k]==x){
		cout<<x;
	}else{
		if(abs(p[k]-x)<abs(p[k-1]-x))
			cout<<p[k];
		else 
			cout<<p[k-1];
	}
	return 0;
}
