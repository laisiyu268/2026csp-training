#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>
using namespace std;
int main(){
	int n,a,b;
	cin>>n>>a>>b;
	a+=b;
	for(int i=1,c;i<=n;++i){
		cin>>c;
		if(c==a){
			cout<<i;
			exit(0);
		}
	}
	cout<<0;
	return 0;
}
