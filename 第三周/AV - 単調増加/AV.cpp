#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>
#include<map>
using namespace std;
typedef long long ll;
int re();
const int N=1e5+5;
int a[N];
bool f[N]={0,1};
ll work(int n){
	return 1ll*(n-1)*n/2ll;
}
int main(){
	int n=re();
	for(int i=1;i<=n;++i){
		a[i]=re();
	}
	ll ans=1ll*n;
	for(int i=2,tmp;i<=n;++i){
		tmp=1;
		while(a[i-1]<a[i]){
			++tmp;
			++i;
		}
		if(tmp>1)
			ans+=work(tmp);
	}
	cout<<ans;
	return 0;
}
int re(){
	int a=0;bool f=1;
	char ch=getchar();
	for(;ch<'0'||ch>'9';ch=getchar())
		if(ch == '-')
			f=0;
	for(;ch>='0' && ch<='9';ch=getchar())
		a=(a<<3)+(a<<1)+(ch^48);
	return f? a:-a;
}
