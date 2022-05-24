#include <bits/stdc++.h>
using namespace std;
main (){
	int t;cin >>t;while (t--){
		int n;
		cin>> n;
		int a[n];
		for (int i=0;i<n;i++) cin >>a[i];
		int m = (int) n/2-1;
		int maxe = a[m];
		for (int i=m;i<n;i++){
			if (maxe < a[i] ) maxe =a[i];
		}
		cout <<maxe<<endl;
	}
}
