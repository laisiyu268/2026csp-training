#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
	int a,b,c,x,ans=0;
	cin>>a>>b>>c>>x;
	x/=50;
	for(int i=0;i<=a;++i){
		for(int j=0;j<=b;++j){
			for(int k=0;k<=c;++k){
				if((i*10+j*2+k*1)==x){
					++ans;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
/*
10 2 1
2

10 2 1
3
*/
