#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>

using namespace std;


int main(){
	int n,h,ans=0;cin>>n>>h;
	for(int i=1,a;i<=n;++i){
		cin>>a;
		if(a<=h){
			++ans;
		}
		else{
			ans+=2;
		}
	}
	cout<<ans;
	return 0;
}
