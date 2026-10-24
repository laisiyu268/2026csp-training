#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	bool f=(a+b)>(c+d);
	if(f)
		printf("Left");
	else{
		f=(a+b)==(c+d);
		if(f)
			printf("Balanced");
		else 
			printf("Right");
	}
	return 0;
}
