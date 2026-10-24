#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
	char a,b;
	cin>>a>>b;
	if(a=='H')
		printf(b=='H'? "H":"D");
	else 
		printf(b=='D'? "H":"D");
	return 0;
}
