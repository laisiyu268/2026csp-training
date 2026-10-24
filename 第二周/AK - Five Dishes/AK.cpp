#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>
using namespace std;
int ds[6],bk[6];
int main(){
	int ans=0,tot=0;
	for(int i=1,d;i<=5;++i){
		cin>>d;
		if(d%10==0){
			ans+=d;
		}
		else{
			ds[++tot]=d;
		}
	}	
	sort(ds+1,ds+tot+1,[&](int a,int b){
		if((a%10)!=(b%10))
			return (a%10)>(b%10);
		return a>b;
	});
	for(int i=1;i<tot;++i){
		ans+=ds[i]+(10-ds[i]%10);
	}
	ans+=ds[tot];
	cout<<ans;
	return 0;
}
