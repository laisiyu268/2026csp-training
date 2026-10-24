#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>

using namespace std;

typedef long long ll;
template<typename R>R re();
const int N=1e4+5;
int main(){
	int n=re<int>();
	ll maxn=0ll;
	for(int i=1,a,tmp;i<=n;++i){
		a=re<ll>();tmp=0;
		while(!(a&1)){
			a/=2ll;
			++tmp;
		}
		maxn+=1ll*tmp;
	}
	cout<<maxn;
	return 0;
}
template<typename R>
R re(){
	int a=0;bool f=1;
	char ch=getchar();
	for (;ch<'0'||ch>'9';ch=getchar())
		if (ch == '-')
			f=0;
	for (;ch>='0' && ch<='9';ch=getchar())
		a=(a<<3)+(a<<1)+(ch^48);
	return f? a:-a;
}
