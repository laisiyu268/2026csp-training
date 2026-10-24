#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
	int n,a;cin>>n>>a;
	n%=500;
	if(n<=a) 
		cout<<"Yes";
	else
		cout<<"No";
	return 0;
}
