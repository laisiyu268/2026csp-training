#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>
using namespace std;
//template<typename R>
inline int re(){
	int a=0;bool f=1;
	char ch=getchar();
	for(;ch<'0'||ch>'9';ch=getchar())
		if(ch=='-') f=0;
	for(;ch>='0'&&ch<='9';ch=getchar())
		a=(a<<3)+(a<<1)+(ch^48);
	return f? a:-a;
}
const int N=1e5+5;
int bk[4*N];
int main(){
	int n=re();
	for(int i=1,a;i<4*n;++i){
		a=re();
		++bk[a];
	}
	for(int i=1;i<=n;++i){
		if(bk[i]<4){
			cout<<i;
			exit(0);
		}
	}
	cout<<n;
	return 0;
}
