#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>

using namespace std;

const char sep=' ';
template<typename W>void wr(W n);
template<typename W,typename... Args>
void wr(W n,Args... args);

int main(){
	int n;cin>>n;
	for(int i=1;i<=n;++i){
		if(i%32)
			wr(i);
		else 
			continue;
		
		if(i<n)
			putchar(' ');
	}
	return 0;
}
template<typename W>
void wr(W n){
	static short a[50];
	if (n<0){
		n=-n;
		putchar('-');
	}
	int top=0;
	do{
		a[top++]=(n%10);
		n/=10;
	}while(n);
	while(top)
		putchar(a[--top]^48);
//	putchar(sep);
	return;
}
template<typename W,typename... Args>
void wr(W n,Args... args){
	wr(n);
	putchar(sep);
	wr(args...);
	return;
}
