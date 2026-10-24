#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>

using namespace std;

inline bool work(int k){
	int len=0;
	string a="";
	do{
		a[len++]=(k%10)^48;
		k/=10;
	}while(k);
	if(len&1) 
		return 1;
	else 
		return 0;
}
int main(){
	int n,ans=0;cin>>n;
	for(int i=1;i<=n;++i){
		ans+=work(i);
	}
	cout<<ans;
	return 0;
}

