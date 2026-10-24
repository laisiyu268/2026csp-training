#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
const int M=105;
char s[M],t[M];
int ls,lt;
bool pd(){
	int minn=min(ls,lt);
	for(int i=0;i<minn;++i){
		if(s[i]<t[i])
			return 1;
		if(s[i]>t[i])
			return 0;
	}
	if(ls>=lt) return 0;
	else return 1;
}
int main(){
	scanf("%s",s);	
	scanf("%s",t);	
	ls=strlen(s),lt=strlen(t);
	sort(s+0,s+ls);
	sort(t+0,t+lt,greater<char>());
	printf(pd()? "Yes":"No");
	return 0;
}
