#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;

main (){
	int t;cin >>t;while (t--){
		int n,x;
		cin >>n>>x;
		int a[n];
		int luythua=1,kq=0;
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		for (int i=n-1 ;i>=0;i--){
			kq +=a[i] *luythua;
			kq%= MOD;
			luythua*=x;
			luythua%=MOD;
		}
		cout <<kq<<endl;
	}
}
