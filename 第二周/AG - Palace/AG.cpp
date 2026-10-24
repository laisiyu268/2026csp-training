#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<chrono>
#include<random>
#include<ctime>
using namespace std;
//int h[1005];
int main(){
	int n,T,A;cin>>n>>T>>A;
	int ans=1;
	double tmp,minn=1e5+9.0;
	for(int i=1,h;i<=n;++i){
		cin>>h;
		tmp=abs(1.0*A-(1.0*T-0.006*h));
		if(minn>tmp){
			minn=tmp;
			ans=i;
		}
	}
	cout<<ans;
	return 0;
}
