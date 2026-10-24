#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>
using namespace std;
struct res{
	string name;
	int p;
	int id;
}r[105];
int main(){
	int n;cin>>n;
	for(int i=1;i<=n;++i){
		r[i].id=i;
		cin>>r[i].name>>r[i].p;
	}
	sort(r+1,r+n+1,[&](res x,res y){
		if(x.name!=y.name)
			return x.name<y.name;
		else if(x.p!=y.p)
			return x.p>y.p;
		else 
			return x.id<y.id;
	});
	for(int i=1;i<=n;++i)
		cout<<r[i].id<<"\n";
	return 0;
}
