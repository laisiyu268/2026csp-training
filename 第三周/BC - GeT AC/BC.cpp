#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>

using namespace std;


const char sep='\n';
inline int re();
template<typename W>inline void wr(W n);
template<typename W,typename... Args>
inline void wr(W n,Args... args);

const int N=1e5+5;
int f[N];
long long sum[N];
int main(){
	int n=re(),Q=re();
	string s;cin>>s;
	for(int i=0;i<n-1;){
		if(s[i]=='A'&&s[i+1]=='C'){
			f[i+1]=1;f[i+2]=2;
			i+=2;
		}
		else{
			++i;
		}
	}
	sum[1]=f[1];
	for(int i=2;i<=n;++i){
		sum[i]=sum[i-1]+f[i];
	}
	/*
	for(int i=1;i<=n;++i)
		cout<<sum[i];
	cout<<"\n";
	*/
	for(int l,r;Q;--Q){
		l=re();r=re();
		
		if(f[l]==2&&f[r]==1&&(sum[r]-sum[l-1])<=3){
			wr(0);
		}
		else{
			if(f[l]==2&&f[r]==1)
				wr((sum[r]-sum[l-1]-1)/3);
			else
				wr((sum[r]-sum[l-1])/3);	
		}
//		cout<<" : "<<(sum[r]-sum[l-1])<<" "<<(sum[r]-sum[l-1])/3<<"\n";
//		wr((f[r]-f[l-1]));
			
	}
	return 0;
}
/*
0 1 2 3 4 5 6 7
A C A C T A C G
1 2 1 2 0 1 2 0
1 3 4 6 6 7 9 9

ACACACAC
A C A C A C A C
1 4
2 3
2 5

8 10
ACACTACG
1 3
2 4
2 6
2 7
3 7
2 3
1 8

*/
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
inline void wr(W n){
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
inline void wr(W n,Args... args){
	wr(n);
//	putchar(sep);
	wr(args...);
	return;
}
