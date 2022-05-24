#include <iostream>
using namespace std;
int sorting(int a[],int n){ 
	for ( int i=0;i<n;i++){
		for (int j =i+1;j<n;j++){
			if (a[i] >a[j]) {
				int temp=a[i];
				a[i] = a[j];
				a[j] =temp;
			}
		}
	}
	return 1;
}

int results(int a[],int n,int k){
	int left=0,right =n-1;
	int kq=0;
	while (left <right){
		if (a[left] +a[right] >=k ) {
		kq += (right-- -left ); 
		}
		else left++;
	}
	return kq;
} 
main(){
	int t ; cin >>t;while (t--){
		int n,k;
		cin >>n>>k;
		int a[n];
		for (int i=0;i<n;i++){
			cin >> a[i];
		}
		sorting(a,n);
		cout <<results (a,n,k)<<endl;
		
	}
}
