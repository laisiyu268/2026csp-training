#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>
using namespace std;
bool f[1005]={0,1};
int main(){
	for(int i=2;i*i<=1000;++i){
		for(int j=i*i;j<=1000;j*=i){
			f[j]=1;
//			cout<<j<<" ";
		}
	}
	/*
	for(int i=1;i<=1000;++i)
		if(f[i]) cout<<i<<" , ";
	*/
	int x;cin>>x;
	for(int i=x;i>0;--i){
		if(f[i]){
			cout<<i;
			break;
		}
	}
	return 0;
}
