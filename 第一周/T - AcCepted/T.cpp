#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
string a;
bool pd(){
	if(a[0]!='A'){
//		cout<<"E1";
		return 0;
	}
		
	int l=a.length(),f=0;
	for(int i=2;i<l-1;++i){
		if(a[i]=='C'&&(f==0)){
			f=i;
			continue;
		}
		if(f&&a[i]=='C'){
//			cout<<"E2";
			return 0;
		}
			
	}
	if(!f){
//		cout<<"E3";
		return 0;
	}
	for(int i=0;i<l;++i){
		if(i==0||i==f)
			continue;
		if(a[i]>='A'&&a[i]<='Z'){
//			cout<<"E4";
			return 0;
		}
	}
	return 1;
}
int main(){
	cin>>a;
	printf(pd()? "AC":"WA");
	return 0;
}
