#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>
#include<set>
using namespace std;
const int N=1e5+5;
inline int re(){
	int a=0;bool f=1;
	char ch=getchar();
	for(;ch<'0'||ch>'9';ch=getchar())
		if(ch=='-') f=0;
	for(;ch>='0'&&ch<='9';ch=getchar())
		a=(a<<3)+(a<<1)+(ch^48);
	return f? a:-a;
}
set<int> s;
int main(){
	int n=re();
	for(int i=1,a;i<=n;++i){
		a=re();
		if(s.count(a))
			s.erase(a);
		else
			s.insert(a);
	}
	cout<<s.size();
	return 0;
}
