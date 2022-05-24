#include <iostream>
using namespace std;
int kq(int arr[],int n,int k){
	int count =0;
	for (int i=0;i<n;i++)
		if (arr[i]<=k)
			count ++;
		
		int count1=0;
		for (int i=0;i<count;i++ ){
			if (arr[i] > k) count1++;
		}
		int kq=count1;
		for (int i=0, j =count ;j<n;i++,j++){
			if (arr[i] > k) count1--;
			if (arr[j]> k) count1++;
		}
		kq=min(kq,count1);
	
	return kq;
}
main (){
	int t;cin >>t;while (t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for (int i=0;i<n;i++){
			cin >>a[i];
		}
		cout <<kq (a,n,k)<<endl;
	}
}
