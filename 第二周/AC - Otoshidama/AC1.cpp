#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>
using namespace std;
int f=0;
int ans[3]={-1,-1,-1};
void dfs(int n,int y,int A,int B,int C,int mo){
	if(mo<0) return;
	if(mo<=10&&!f){
		if(mo/1==n){
			C+=n;
			ans[0]=A;ans[1]=B;ans[2]=C;f=1;
			return;
		}
		else if(mo/5==n&&mo%5==0){
			B+=n;
			ans[0]=A;ans[1]=B;ans[2]=C;f=1;
			return;
		}
		else if(mo/10==n&&mo%10==0){
			A+=n;
			ans[0]=A;ans[1]=B;ans[2]=C;f=1;
			return;
		}		
		if(n==1){
			if(mo==10) ++A;
			else if(mo==5) ++B;
			else if(mo==1) ++C;
			else{
				f=-1;
				return;
			}
			ans[0]=A;ans[1]=B;ans[2]=C;f=1;
			return;
		}
		else if(n==2){
			if(mo==10) B+=2;
			else if(mo==2) C=2;
			else if(mo==6) ++B,++C;
			else{
				f=-1;
				return ;
			}
			ans[0]=A;ans[1]=B;ans[2]=C;f=1;
			return;
		}
	}
	if(f){
		return;
	}
	if(n==0&&mo==0&&!f){
		ans[0]=A;ans[1]=B;ans[2]=C;f=1;
		return;
	}
	if(n==0||mo<=0) return;
	for(int i=0;i<3&&!f;++i){
		if(n==0&&mo==0){
			ans[0]=A;ans[1]=B;ans[2]=C;f=1;
			return;
		}
		if(i==0&&y>=10&&!f) dfs(n-1,y,A+1,B,C,mo-10);
		if(i==1&&y>=5&&!f) dfs(n-1,y,A,B+1,C,mo-5);
		if(i==2&&y>=1&&!f) dfs(n-1,y,A,B,C+1,mo-1);
		
	}
}
void printNo(){
	printf("-1 -1 -1");
	exit(0);
}
int main(){
	int n,y;cin>>n>>y;
	y/=1000;
	if(int(y/10)>n){
		printNo();
	}
	if(y/10==n){
		printf("%d 0 0",y/10);
		exit(0);
	}
	else if(y/5==n){
		printf("0 %d 0",y/5);
		exit(0);
	}
	else if(y==n){
		printf("0 0 %d",y);
		exit(0);
	}
	dfs(n,y,0,0,0,y);
	if(!f||f==-1) printNo();
	printf("%d %d %d",ans[0],ans[1],ans[2]);
	return 0;
}
/*
10000 5000 1000
10 5 1

*/
