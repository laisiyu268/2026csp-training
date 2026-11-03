#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>

using namespace std;

constexpr int N=5e4+3,M=1e9+3;
int a[N],a2[N];
bool f[N];
struct rocks{
	int l1,l2;
	int id;
}s[N];
int re();
int main(){
	int l=re(),n=re(),m=re(),top,k;
	a[0]=0;
	for(int i=1;i<=n;++i)
		a[i]=re();
	a[n+1]=l;
	sort(a,a+n+2);
	for(top=n;m;--m,top=k){
		for(int i=1;i<=top;++i){
			s[i].l1=a[i+1]-a[i];
			s[i].l2=a[i]-a[i-1];
			s[i].id=i;
		}
		sort(s+1,s+top,[&](const rocks& x,const rocks& y){
			int minx=min(x.l1,x.l2),
			miny=min(y.l1,y.l2);
			if(minx!=miny)
				return minx<miny;
			return max(x.l1,x.l2)<max(y.l1,y.l2);
		});
		memset(f,0,sizeof(f));
		k=s[1].id;
		f[k]=1;
		k=0;
		for(int i=1;i<=top;++i){
			if(!f[i])
				a[++k]=a[i];
		}
		a[k+1]=l;
		/*
		for(int i=0;i<=k+1;++i){
			cout<<a[i]<<", ";
		}cout<<"\n";
		*/
	}
	int minn=M;
	for(int i=0;i<=top;++i){
		minn=min(a[i+1]-a[i],minn);
	}cout<<minn;
	return 0;
}
/*
0 2 11 14 17 21 25
//2 9 :1
9 3 :2
//3 3 :3
3 4 :4
4 4 :5


9 3 3 4

*/
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
