#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>
#include<set>

using namespace std;

const int M=1e6;
set<int> p;
int main(){
	int s;cin>>s;
	for(int x=s,i=1;;++i){
		if(p.find(x)==p.end())
			p.insert(x);
		else{
			cout<<i;
			exit(0);
		}
		if(x&1){
			x=x*3+1;
		}
		else{
			x>>=1;
		}
	}
	return 0;
}
