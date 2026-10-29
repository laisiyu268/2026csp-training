#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>

using namespace std;

int main(){
	int n,k;cin>>n>>k;
	for(;k;--k){
		if(n%10){
			--n;
		}else{
			n/=10;
		}
	}
	cout<<n;
	return 0;
}
