#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>

using namespace std;
const int N=1e5+5;
int a[N];
int re();
int main(){
	int n=re(),maxn=1;
	a[1]=re();
	for(int i=2,tmp=1;i<=n;++i){
		a[i]=re();
		if(a[i]>=a[i-1]){
			++tmp;
		}else{
			tmp=1;
		}
		maxn=max(tmp,maxn);
	}
	cout<<maxn;
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
