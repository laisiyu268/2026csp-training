#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int a[205];
int main(){
	int n;cin>>n;
	int ans=0;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	for(int f=1;f;){
		for(int i=1;i<=n;++i){
			if(a[i]&1){
				f=0;
				break;
			}
			a[i]/=2;
		}
		if(!f)
			break;
		else{
			++ans;
		}
	}
	cout<<ans;
	return 0;
}
