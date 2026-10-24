#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>

using namespace std;

int main(){
	int n,ans=0;
	scanf("%d",&n);
	string s;
	for(int i=1;i<=n+1;++i){
		getline(cin,s);
		auto k=s.find("nailong");
		if(k!=string::npos){
			++ans;
		}
	}
	cout<<ans;
	return 0;
}
