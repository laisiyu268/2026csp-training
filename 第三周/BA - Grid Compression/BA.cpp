#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>

using namespace std;

const int N=105;
//string a[N];
char a[N][N];
bool f[N][N];
int h,w;
inline bool pdr(int l){
	for(int i=1;i<=w;++i){
		if(a[l][i]=='#')
			return 0;
	}
	return 1;
}
inline bool pdc(int l){
	for(int i=1;i<=h;++i){
		if(a[i][l]=='#')
			return 0;
	}
	return 1;
}
int main(){
	cin>>h>>w;
	for(int i=1;i<=h;++i){
		for(int j=1;j<=w;++j)
			cin>>a[i][j];
	}
	for(int i=1;i<=h;++i){
		if(pdr(i))
			for(int j=1;j<=w;++j)
				f[i][j]=1;
	}
	for(int i=1;i<=w;++i){
		if(pdc(i))
			for(int j=1;j<=h;++j)
				f[j][i]=1;
	}
	for(int i=1;i<=h;++i){
		if(pdr(i)) 
			continue;
		for(int j=1;j<=w;++j)
			if(!f[i][j])
				cout<<a[i][j];
		cout<<"\n";
	}
	return 0;
}

