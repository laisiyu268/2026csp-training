#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>

using namespace std;
const int N=101;
bool f[N];
int a[N];
int re();
int main(){
	for(int T=re(),n,top;T;--T){
		memset(f,0,sizeof(f));
		n=re();top=0;
		for(int i=1;i<=n;++i){
			a[i]=re();
		}
		sort(a+1,a+n+1);
		for(int i=1;i<n;++i){
			if(a[i+1]-a[i]<=1){
				f[i]=1;
			}
		}
		for(int i=1;i<=n;++i){
			if(!f[i])
				a[++top]=a[i];
		}
//		cout<<top<<"  ";
		cout<<(top==1? "YES":"NO")<<"\n";
	}
	
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
