#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>

using namespace std;

typedef long long ll;
constexpr int M=1e9; 
inline int workd(ll x){
	int top=0;
	do{
		x/=10;
		++top;
	}while(x);
	return top;
}
ll lfind(int a,int b,ll x){
	if(x<1ll*a*1+1ll*b*1)
		return 0;
	int l=1,r=M,mid;ll tmp;
	for(;l<=r;){
		mid=(l+r)>>1;
		tmp=1ll*a*mid+1ll*b*workd(mid);
		if(tmp>x){
			r=mid-1;
		}else if(tmp<x){
			l=mid+1;
		}else{
			return mid;
		}
	}
	if(tmp<=x){
		return 1ll*mid;
	}else{
		return 1ll*(mid-1);
	}
}
int main() {
	int a,b;ll x;
	cin>>a>>b>>x;
	cout<<lfind(a,b,x);
	// a*n+b*d
	return 0;
}
