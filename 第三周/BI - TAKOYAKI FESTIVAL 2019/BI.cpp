#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>

using namespace std;

int d[55];
int main(){
	long long ans=0ll;
	int n;cin>>n;
	for(int i=1;i<=n;++i){
		cin>>d[i];
	}
	for(int i=1;i<n;++i){
		for(int j=i+1;j<=n;++j){
			ans+=1ll*d[i]*1ll*d[j];
		}
	}
	cout<<ans;
	return 0;
}
