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
const char sep='\n';
template<typename R>R re();
template<typename W>void wr(W n);
template<typename W,typename... Args>
void wr(W n,Args... args);
constexpr int N=1e5+5;
int a[N];
map<int,int> mp;
int main(){
	double tmp;
	int n=re<int>(),Q=re<int>();
	for(int i=1;i<=n;++i)
		a[i]=re<int>();
	for(int l,r,p,q;Q;--Q){
		l=re<int>();r=re<int>();
		p=re<int>();q=re<int>();
		tmp=(1.0*r-l+1.0)*(1.0*p/q);
		mp.clear();
		for(int i=l;i<=r;++i){
			++mp[a[i]];
		}
		wr([&](){
			for(auto it=mp.begin();it!=mp.end();++it){
				if((it->second)>tmp){
					return it->first;
				}
			}
			return -1;
		}());
		
	}
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
template<typename W>
void wr(W n){
	static short a[50];
	if (n<0){
		n=-n;
		putchar('-');
	}
	int top=0;
	do{
		a[top++]=(n%10);
		n/=10;
	}while(n);
	while(top)
		putchar(a[--top]^48);
	putchar(sep);
	return;
}
template<typename W,typename... Args>
void wr(W n,Args... args){
	wr(n);
//	putchar(sep);
	wr(args...);
	return;
}
