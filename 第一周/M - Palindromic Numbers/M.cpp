#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
inline bool pd(int k){
	static short a[60]={0};
	int top=0;
	do{
		a[++top]=k%10;
		k/=10;
	}while(k);
	for(int i=1,j=top;i<=j;++i,--j){
		if(a[i]!=a[j])
			return 0;
	}
	return 1;
}
int main(){
	int l,r,ans=0;
	cin>>l>>r;
	for(int i=l;i<=r;++i){
		if(pd(i))
			++ans;
	}
	cout<<ans;
	return 0;
}
