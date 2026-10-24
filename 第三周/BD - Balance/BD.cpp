#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>
#include<cmath>

using namespace std;

const int N=105;
int a[N];
int main(){
	int n;cin>>n;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	int ans=N*N;
	for(int i=2,tmp1,tmp2;i<=n;++i){
		tmp1=tmp2=0;
		for(int j=1;j<i;++j){
			tmp1+=a[j];
		}
		for(int j=i;j<=n;++j){
			tmp2+=a[j];
		}
		ans=min(ans,abs(tmp1-tmp2));
	}
	cout<<ans;
	return 0;
}
