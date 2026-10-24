#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int a[1005];
int main(){
	int n,maxn=0,ans=0;cin>>n;
	for(int i=1,x;i<=n;++i){
		cin>>x;
		++a[x];
		maxn=max(maxn,x);
	}
	for(int i=maxn;i>0;--i){
		if(a[i]){
			++ans;
		}
	}
	cout<<ans;
	return 0;
}
