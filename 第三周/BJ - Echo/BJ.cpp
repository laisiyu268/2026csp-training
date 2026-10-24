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
	if(l&1){
		cout<<"No";
		exit(0);
	}
	cout<<([&](){
		for(int i=0,j=l/2;i<l/2&&j<l;++i,++j){
			if(s[i]!=s[j])
				return 0;
		}
		return 1;
	}()? "Yes":"No");

	return 0;
}
