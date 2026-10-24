#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int a[30],b[30];
int main(){
	int len,maxn=0;cin>>len;
	string n;cin>>n;
	for(int i=0,ans;i<len-1;++i){
		ans=0;
		for(int j=0;j<=i;++j){
			++a[n[j]-'a'];
		}
		for(int j=i+1;j<len;++j){
			++b[n[j]-'a'];
		}
		for(int i=0;i<26;++i){
			if(a[i]&&b[i])
				++ans;
			a[i]=b[i]=0;
		}
		maxn=max(maxn,ans);
	}
	cout<<maxn;
	return 0;
}
