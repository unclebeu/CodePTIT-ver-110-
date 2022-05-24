#include <bits/stdc++.h>
using namespace std;

int sumd (int n){
	int sum=0;
	while (n!=0){
		sum +=n%10;
		n/=10;
	}
	return sum;
}
main (){
	int n,s;
	cin >> n>>s;
	int maxx=0;
	int minn = 1e9;
	for (int i =pow (10,(n-1)) ; i< pow (10,n);i++){
		if (sumd(i) == s ) 
		if (i< min)
	     minn =i;	
		cout<<minn<<" ";
	}
	for (int i =pow (10,(n-1)) ; i< pow (10,n);i++){
		if (sumd(i) == s ) 
		if ( i >maxx)
		maxx =i;	
		cout<<maxx;
	}
}
