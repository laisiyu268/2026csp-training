#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>
#include<map>

using namespace std;

constexpr int N=1e5+1;
map<int,int> mp;
int re();
int main(){
	int n=re(),ans=0;
	for(int i=1,a;i<=n;++i){
		a=re();
		++mp[a];
	}
	int st=0,nd=0;
	for(auto it=mp.begin();it!=mp.end();++it){
		st=it->first;
		nd=it->second;
		if(st>nd){
			ans+=nd;
		}else if(st<nd){
			ans+=nd-st;
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
