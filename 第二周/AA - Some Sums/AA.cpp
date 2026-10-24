#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int work(int n){
	static int b[30]={0};
	int top=0;
	do{
		b[++top]=n%10;
		n/=10;
	}while(n);
	int sum=0;
	while(top)
		sum+=b[top--];
	return sum;
}
int a[100];
int main(){
	int n,a,b,ans=0;
	cin>>n>>a>>b;
	for(int i=1,k;i<=n;++i){
		k=work(i);
		if(k>=a&&k<=b){
			ans+=i;
		}
	}
	cout<<ans;
	return 0;
}
