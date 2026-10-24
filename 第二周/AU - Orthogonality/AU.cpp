#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>
using namespace std;
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
int a[N],b[N];
int main(){
	int n=re();
	long long ans=0ll;
	for(int i=1;i<=n;++i) a[i]=re();
	for(int i=1;i<=n;++i){
		b[i]=re();
		ans+=1ll*a[i]*b[i];
	}
	cout<<(ans==0? "Yes":"No");
	return 0;
}
