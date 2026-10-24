#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>
using namespace std;
int main(){
	int a,b;cin>>a>>b;
	string s;cin>>s;
	printf([=,&s](){
		if(s[a]!='-')
			return 0;
		for(int i=0;i<a;++i)
			if(s[i]<'0'||s[i]>'9')
				return 0;
		for(int i=a+1;i<a+b+1;++i)
			if(s[i]<'0'||s[i]>'9')
				return 0;
		return 1;
	}()? "Yes":"No");
	return 0;
}
