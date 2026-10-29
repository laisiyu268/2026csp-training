#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>

using namespace std;

char ch;
bool f[30];
int main(){
	int l;cin>>l;
	string st;cin>>st;
	for(int i=0;i<l;++i){
		ch=st[i];
		if(ch>='A'&&ch<='Z')
			ch+=32;
		f[ch-'a']=1;
	}
	printf([&](){
		for(int i=0;i<26;++i)
			if(!f[i])
				return 0;
		return 1;
	}()? "YES":"NO");
	return 0;
}
