#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>

using namespace std;

const int N=1e5;
int re();
int main(){
	int n=re(),k=re(),ans=0;
	for(int i=1,h;i<=n;++i){
		h=re();
		if(h>=k){
			++ans;
		}
	}
	cout<<ans;
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
