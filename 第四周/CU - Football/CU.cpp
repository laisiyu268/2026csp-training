#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>

using namespace std;

int main(){
	string s;cin>>s;
	bool k1=s.find("1111111")!=string::npos,
		k2=s.find("0000000")!=string::npos;
	printf((k1||k2)? "YES":"NO");
	return 0;
}
