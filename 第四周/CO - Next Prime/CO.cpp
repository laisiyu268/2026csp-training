#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>

using namespace std;
constexpr int N=1e5+10;
bool f[N]={1,1,0,0};
int ans[N],top;
void linit(){
	for(int i=2;i*i<=N;++i){
		for(int j=2;i*j<=N;++j){
			f[i*j]=1;
		}
	}
	for(int i=1;i<N;++i){
		if(f[i]==0){
			ans[++top]=i;
		}
	}
	
}
int main(){
	int n;cin>>n;
	linit();
	cout<<ans[lower_bound(ans+1,ans+top+1,n)-ans];
	return 0;
}
