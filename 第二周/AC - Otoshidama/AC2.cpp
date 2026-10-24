#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>
using namespace std;
int main(){
	int n,y;
	cin>>n>>y;
	y/=1000;
	for(int i=0;i<=n;i++)
		for(int j=0;j<=n-i;j++)
			if(i*10+j*5+(n-i-j)==y){
				cout<<i<<' '<<j<<' '<<n-i-j<<'\n';
				exit(0);
			}
	printf("-1 -1 -1");
	return 0;
}
/*
10 5 1
20 196000
20 196
*/
