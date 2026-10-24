#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>

using namespace std;

const int N=2e6+1;
int main(){
	int k,x;
	cin>>k>>x;
	for(int i=x-k+1;i<x+k;++i){
		cout<<i<<" ";
	}
	return 0;
}
