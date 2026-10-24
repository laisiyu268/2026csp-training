#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>

using namespace std;
const int N=1e3+5;
int mp[N][N];
const char sep=' ';
int re();
template<typename W>void wr(W n);
template<typename W,typename... Args>
void wr(W n,Args... args);
int main(){
	int n=re();
	for(int m=re(),sx,sy,ex,ey;m;--m){
		sx=re();sy=re();ex=re();ey=re();
		for(int i=sx;i<=ex;++i){
			for(int j=sy;j<=ey;++j){
				++mp[i][j];
			}
		}
	}
	for(int i=1;i<=n;++i){
		for(int j=1;j<=n;++j)
			wr(mp[i][j]);
		putchar('\n');
	}
	return 0;
}
int re(){
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
//O2
