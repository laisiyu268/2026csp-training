#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>
using namespace std;
int main(){
	int n,m;cin>>n>>m;
	if(n==1&&m==1){
		cout<<1;
	}
	else if(n==1||m==1){
		cout<<max(1ll*n,1ll*m)-2ll;
	}
	else{
		cout<<1ll*(n-2ll)*(m-2ll);
	}
	return 0;
}
/*


*/
