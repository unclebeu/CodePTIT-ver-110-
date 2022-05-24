#include <iostream>
using namespace std;
long long minn (long long a){
	long long b=0, d=1;
	while (a != 0 ){
		int c = a%10;
		if (c==6) c=5;
		b=c*d+b;
		a/=10;d*=10;
	}
	return b;
}

long long maxx (long long a){
	long long b=0 ,d=1;
	while (a >0 ){
		int c = a%10;
		if (c==5) c=6;
		b=c*d+b;
		a/=10;d*=10;
	}
	return b;
}

int main(){
	int t;
	cin >>t;
	while (t--){
    	long long n,m;
    	cin >>n>>m;
    
    	cout <<""<<minn (n) + minn (m)<<" "<<maxx(n)+maxx(m)<<endl;
    	
 	}
 }
