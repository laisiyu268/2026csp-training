#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>

using namespace std;

struct money{
	double x;
	string u;
}a[11];
int main(){
	double ans=0.0;
	int n;cin>>n;
	for(int i=1;i<=n;++i){
		cin>>a[i].x>>a[i].u;
		if(a[i].u=="JPY"){
			ans+=1.0*a[i].x;
		}else{
			ans+=380000.0*a[i].x;
		}
	}
	printf("%.8f",ans);
	return 0;
}
