#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>

using namespace std;

int re();
int main(){
	int n=re(),m=re();
	int L=1,R=n;
	for(int i=1,l,r;i<=m;++i){
		l=re();r=re();
		L=max(l,L);
		R=min(r,R);
	}
	cout<<((R-L+1)>0? (R-L+1):0);
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
