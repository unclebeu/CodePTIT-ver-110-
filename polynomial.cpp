#include <iostream>
using namespace std;
long long cal(int arr[],int n,int x){
	long long kq=arr[0];
	for (int i=1;i<n;i++){
		kq=(kq *x) % 1000000007+arr[i]% 1000000007;
	}

	return kq;
}
main (){
	int t;cin >>t;while (t--){
		int n,x;
		cin >>n>>x;
		int a[n];
		for (int i=0;i<n;i++){
			cin >>a[i];
		}
		cout <<cal (a,n,x)<<endl;
	}
}
