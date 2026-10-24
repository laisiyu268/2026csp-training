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
	int l=s.length();
	for(int i=0;i<l;++i){
		if(s[i]>='a'&&s[i]<='z')
			s[i]='x';
		else if(s[i]>='A'&&s[i]<='Z')
			s[i]='x';
	}
	cout<<s;
	return 0;
}
