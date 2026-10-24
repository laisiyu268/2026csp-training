#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>
#include<map>
using namespace std;
int c[5];
auto pd1=[](string x){
	if(x=="AC")	return 1;
	if(x=="WA")	return 2;
	if(x=="TLE") return 3;
	if(x=="RE")	return 4;
	return 1;
};
auto pd2=[](int x){
	if(x==1) return "AC";
	if(x==2) return "WA";
	if(x==3) return "TLE";
	if(x==4) return "RE";
	return "AC";
};
int main(){
	int n;cin>>n;
	string s;
	for(int i=1;i<=n;++i){
		cin>>s;
		++c[pd1(s)];
	}
	for(int i=1;i<=4;++i){
		cout<<pd2(i)<<" x "<<c[i]<<"\n";
	}
	return 0;
}
