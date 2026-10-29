#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>

using namespace std;

int main(){
	int l;cin>>l;
	string s;cin>>s;
	int cntA=0,cntD=0;
	for(int i=0;i<l;++i){
		if(s[i]=='A')
			++cntA;
		else if(s[i]=='D')
			++cntD;
	}
	if(cntA>cntD)
		printf("Anton");
	else if(cntA==cntD)
		printf("Friendship");
	else 
		printf("Danik");
	return 0;
}
