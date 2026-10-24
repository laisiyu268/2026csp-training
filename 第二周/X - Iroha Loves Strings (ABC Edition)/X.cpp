#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
string s[105];
int main(){
	int n,l;
	cin>>n>>l;
	for(int i=0;i<n;++i){
		cin>>s[i];
	}
	sort(s,s+n);
	string ans="";
	for(int i=0;i<n;++i){
		ans+=s[i];
	}
	cout<<ans;
	return 0;
}
