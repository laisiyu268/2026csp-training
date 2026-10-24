#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int f[30];
int main(){
	string s;
	cin>>s;
	int l=s.length();
	for(int i=0;i<l;++i){
		++f[s[i]-'a'];
	}
	int p=0;
	for(int i=0;i<26;++i){
		if(!f[i]){
			p=1;
			cout<<char(i+'a');
			break;
		}
	}
	if(!p)
		cout<<"None";
	return 0;
}
