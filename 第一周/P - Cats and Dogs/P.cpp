#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
	int a,b,x;
	cin>>a>>b>>x;
	printf((x>=a&&x<=(a+b))? "YES":"NO");
	return 0;
}
