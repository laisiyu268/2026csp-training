#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>
using namespace std;
const char sep='\n';
const int N=1e5;
inline int re();
template<typename W>inline void wr(W n);
bool a[N+5];
int fa[N+5];
void prime(){
	a[0]=1;a[1]=1;a[N]=1;
	for(int i=2;i*i<=N;++i){
		for(int j=2;i*j<=N;++j){
			a[i*j]=1;
		}
	}
	for(int i=2,tmp;i<=N;++i){
		tmp=0;
		if(i&1)
			if((!a[i]) && (!a[int((i+1)/2)]))
				tmp=1;
		fa[i]+=fa[i-1]+tmp;
	}
}
int main(){
	prime();
	for(int Q=re(),l,r;Q;--Q){
		l=re();r=re();
		wr(fa[r]-fa[l-1]);
	}
	return 0;
}
inline int re(){
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
