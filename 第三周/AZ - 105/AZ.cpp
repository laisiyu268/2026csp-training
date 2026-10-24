#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<cmath>

using namespace std;

const int N=200;
int a[N+5]={0,1};
int main(){
	for(int i=2;i<=N;++i){
		for(int j=1;j*j<=i;++j){
			if(j*j==i)
				++a[i];
			else if(i%j==0)
				a[i]+=2;
		}
	}
	int n,ans=0;cin>>n;
	for(int i=1;i<=n;++i){
		if(a[i]==8&&(i&1))
			++ans;
	}cout<<ans;
	return 0;
}
