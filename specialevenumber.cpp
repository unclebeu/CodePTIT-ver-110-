#include <iostream>
using namespace std;
long long checkEven (long long n){
	if ( n%2 ==0) return 1;
	return 0;
}
long long checkdigit (long long n){
	while (n !=0){
		int digit =n %10;
		if (digit %2 !=0) return 0;
		n/=10;
	}
	return 1;
}

main (){
	int t;
	cin >>t;
	while (t--){
		long long n;
		cin >>n;
		if ( checkdigit (n) && checkEven (n)) cout <<"YES"<<endl;
		else cout <<"NO"<<endl;
	}
}

