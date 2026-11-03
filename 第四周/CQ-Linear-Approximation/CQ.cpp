#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>
#include<cmath>

using namespace std;
typedef long long ll;

constexpr int N=2e5+1;
int a[N];
template<typename R>R re();
int main(){
	int n=re<int>();
	ll sum=0ll;
	for(int i=1;i<=n;++i){
		a[i]=re<int>()-i;
		sum+=1ll*a[i];
	}
	sum=sum/(n*1ll);
	ll ans1=0ll,ans2=0ll,ans3=0ll;
	ll sum2=1ll*sum-1,sum3=1ll*sum+1;
	for(int i=1;i<=n;++i){
		ans1+=1ll*labs(a[i]-sum);
		ans2+=1ll*labs(a[i]-sum2);
		ans3+=1ll*labs(a[i]-sum3);
	}
	cout<<min(ans1,min(ans2,ans3));
	return 0;
}
template<typename R>
R re(){
	R a=0;bool f=1;
	char ch=getchar();
	for(;ch<'0'||ch>'9';ch=getchar())
		if(ch=='-')
			f=0;
	for(;ch>='0' && ch<='9';ch=getchar())
		a=(a<<3)+(a<<1)+(ch^48);
	return f? a:-a;
}
