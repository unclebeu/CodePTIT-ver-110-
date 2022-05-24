#include<iostream>
using namespace std;
int sphenic(int n){
	int count=0;
	if(n==1) return 0;
	for(int i=2;i<=n;i++){
		if(n%i==0){
			count++;
			n/=i;
		}
		if(n%i==0) return 0;
	}
	return (count==3);
}
main(){
	int t;
	cin >>t;
	while (t--){
	
		int n;
		cin >>n;
		if(sphenic(n)) cout <<"1\n";
		else cout <<"0\n";
	
		
	}
}
