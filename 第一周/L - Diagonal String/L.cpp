#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
string mp[5];
int main(){
	for(int i=0;i<3;++i){
		cin>>mp[i];
	}
	cout<<mp[0][0]<<mp[1][1]<<mp[2][2];
	return 0;
}
