#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
	string a;
	cin>>a;
	int ans=0;
	for(int i=0;i<3;++i){
		if(a[i]=='1')
			++ans;
	}
	cout<<ans;
	return 0;
}
