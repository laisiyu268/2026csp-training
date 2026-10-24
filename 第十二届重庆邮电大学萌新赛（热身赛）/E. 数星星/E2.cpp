#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;cin>>n;
	for(int i=1;i<=n;++i){
		if(i%32)
			cout<<i;
		else 
			continue;
		if(i<n)
			cout<<" ";
	}
	return 0;
}
