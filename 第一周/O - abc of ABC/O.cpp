#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int l[10];
bool pd(){
	for(int i=0;i<3;++i){
		if((!l[i])||(l[i]!=1))
			return 0;
	}
	return 1;
}
int main(){
	string a;
	getline(cin,a);
	for(int i=0;i<3;++i){
		++l[a[i]-'a'];
	}
	printf(pd()? "Yes":"No");
	return 0;
}
