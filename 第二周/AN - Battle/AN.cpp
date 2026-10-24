#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>
using namespace std;
int main(){
	int A,B,C,D;
	cin>>A>>B>>C>>D;
	for(;;){
		C-=B;
		if(C<=0){
			cout<<"Yes";
			exit(0);
		}
		A-=D;
		if(A<=0){
			cout<<"No";
			exit(0);
		}
	}
	return 0;
}
