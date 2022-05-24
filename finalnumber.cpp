#include <iostream>
#include <cmath>
using namespace std;
long long sum (long long n){
	long long sum =0;
	while ( n > 0 || sum >9){
		if (n==0){
			n=sum;
			sum =0;
		}
		sum =sum + n % 10;
		n /= 10;
	}
	return sum;
}

main (){
	int t;
	cin >> t;
	while (t--){
 		long long n;
 		cin >>n;
 		cout << ""<< sum (n);
 		cout << "\n";
 	}
}
