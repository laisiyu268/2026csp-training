#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
	int a,b;cin>>a>>b;
	printf((a*b)&1? "Odd":"Even");
	return 0;
}
