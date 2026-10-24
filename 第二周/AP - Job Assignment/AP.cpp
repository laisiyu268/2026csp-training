#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>
using namespace std;
const int N=1e3+5,M=2e5+5;
struct worker{
	int a;
	int b;
}w[N];
int main(){
	int n,ans=M;cin>>n;
	for(int i=1;i<=n;++i){
		cin>>w[i].a>>w[i].b;
	}
	for(int i=1,tmp;i<=n;++i){
		for(int j=1;j<=n;++j){
			if(i==j)
				tmp=w[i].a+w[j].b;
			else
				tmp=max(w[i].a,w[j].b);
			ans=min(ans,tmp);
		}
	}
	cout<<ans;
	return 0;
}
