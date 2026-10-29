#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>

using namespace std;

constexpr int N=31624*2,M=2e9;
int a[N],top=0;
int main(){
	int n;cin>>n;
	for(int i=1;i*i<=M;++i){
		a[++top]=i*i;
	}
	int k=lower_bound(a+1,a+top+1,n)-a;
	if(a[k]==n){
		cout<<a[k];
	}else{
		cout<<a[k-1];
	}
	
	return 0;
}
