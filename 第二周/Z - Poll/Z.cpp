#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<map>
using namespace std;
const int M=2e5+5;
struct person{
	int ti=0;
	string name;
}p[M];
map<string,int> p1;
bool cmp(person x,person y){
	if(x.ti!=y.ti)
		return x.ti>y.ti;
	else
		return x.name<y.name;
}
int main(){
	int n;cin>>n;
	string nam;
	for(int i=1;i<=n;++i){
		cin>>nam;
		++p1[nam];
	}
	int top=0;
	for(auto it=p1.begin();it!=p1.end();++it){
		p[++top].name=it->first;
		p[top].ti=it->second;
	}
	sort(p+1,p+top+1,cmp);
	for(int i=1;;++i){
		cout<<p[i].name<<"\n";
		if(p[i].ti!=p[i+1].ti)
			break;
	}
	return 0;
}
