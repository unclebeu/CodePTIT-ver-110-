#include <iostream>
#include <fstream>
using namespace std;
bool checkp (long long n){
	if(n<2) return false;
	if (n==2) return true;
	else {
		long long dem =0;
		for (long long i=1;i<=n;i++){
			if (n%i == 0 ) dem++;
		}
		if(dem == 2) return true;
		return false;
	}
}
void sangsnt ( long long n, long long snt [], long long &demsnt){
	demsnt =0;
	for (long long i=2;i<=n;i++){
		if (checkp(i)) snt[demsnt++] =i;
		demsnt++;
	}
}

main (){	
		
		int t; cin >>t; while (t--){
		long long n;
		cin >>n;
		long long snt[n];
		long long demsnt;
		sangsnt(n,snt,demsnt);
		for (int i=0;i<demsnt;i++){
			if (checkp(i-snt[i])){
				cout <<snt[i]<<" "<<n-snt[i];
				break;
			}
		}
		cout<<endl;
	}
}
