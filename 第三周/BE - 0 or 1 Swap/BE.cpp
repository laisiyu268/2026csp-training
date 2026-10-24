#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
#include<random>
#include<ctime>

using namespace std;

int a[55];
int main(){
	int n;cin>>n;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	if(is_sorted(a+1,a+n+1)){
		cout<<"YES";
		exit(0);
	}
	for(int i=1;i<n;++i){
		for(int j=i+1;j<=n;++j){
			if(a[i]>a[j]){
				swap(a[i],a[j]);
				if(is_sorted(a+1,a+n+1)){
					cout<<"YES";
					exit(0);
				}
				swap(a[i],a[j]);
			}
		}
	}
	cout<<"NO";
	return 0;
}
