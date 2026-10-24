#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>
using namespace std;
int a[105];
int main(){
	for(int i=0;i*4<=100;++i){
		for(int j=0;i*4+7*j<=100;++j){
			a[i*4+j*7]=1;
		}
	}
	int n;cin>>n;
	printf(a[n]? "Yes":"No");
	return 0;
}
