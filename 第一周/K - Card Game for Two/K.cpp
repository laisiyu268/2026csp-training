#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int a[105];
int main(){
	int n,A=0,B=0;cin>>n;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	sort(a+1,a+n+1,greater<int>());
	for(int i=1;i<=n;++i){
		if(i&1)
			A+=a[i];
		else 
			B+=a[i];
	}
	cout<<A-B;
	return 0;
}
