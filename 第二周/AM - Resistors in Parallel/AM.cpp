#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>
using namespace std;
int a[1005];
int main(){
	int n;cin>>n;
	double ans=0.0,tmp=0.0;
	for(int i=1;i<=n;++i){
		cin>>a[i];
		tmp+=1.0/(1.0*a[i]);
	}
	ans=1.0/tmp;
	printf("%.7f",ans);
	return 0;
}
