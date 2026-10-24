#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>
using namespace std;
auto pd=[](char ch)->bool{
	if(ch=='A'||ch=='C'||ch=='G'||ch=='T') 
		return 1;
	else 
		return 0;
};
int main(){
	string s;cin>>s;
	int l=s.length(),maxn=0;
	for(int i=0,tmp;i<l;++i){
		tmp=0;
		for(int j=i;j<l&&pd(s[j]);++j){
			++tmp;
		}
		maxn=max(tmp,maxn);
	}
	cout<<maxn;
	return 0;
}
