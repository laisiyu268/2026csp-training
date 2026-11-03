#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>

using namespace std;

constexpr int N=2e5+1;
int a[N];
int re();
int main(){
//	freopen("P1102_11.in","r",stdin);
	int n=re(),c=re();
	long long ans=0ll;
	for(int i=1;i<=n;++i){
		a[i]=re();
	}
	sort(a+1,a+n+1);
	for(int i=n,k1,k2,B;i>1;--i){
		B=a[i]-c;
		k1=lower_bound(a+1,a+i,B)-a;
		k2=upper_bound(a+1,a+i,B)-a;
		if(k1>=i||a[k1]!=B){
			continue;
		}else{
			ans+=1ll*(1ll*k2-k1);
		}
	}
	cout<<ans;
	return 0;
}
int re(){
	int a=0;bool f=1;
	char ch=getchar();
	for(;ch<'0'||ch>'9';ch=getchar())
		if(ch=='-')
			f=0;
	for(;ch>='0' && ch<='9';ch=getchar())
		a=(a<<3)+(a<<1)+(ch^48);
	return f? a:-a;
}
