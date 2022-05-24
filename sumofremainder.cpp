#include <iostream>
using namespace std;
long long summ(long long n,long long k);
int main(){
	int t; cin>>t;while (t--){
		long long n,k;
		cin>>n>>k;
		long long sumn =summ (n,k);
		if ( sumn == k) cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
}

long long summ (long long n,long long k){
	long long sum=0;
	for (int i=1;i<=n;i++){
		sum +=i%k;
	}
	return sum;
}
