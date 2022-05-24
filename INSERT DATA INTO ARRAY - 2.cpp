#include <bits/stdc++.h>
using namespace std;
main (){
	int t; cin >>t; for (int i=1;i<=t;i++){
		
	
	int n,m,index;
	cin >>n>>m>>index;
	int a[n],b[m];
	for (int i=0 ;i<n;i++ ) cin >>a[i];
	for (int j=0 ;j<m;j++ ) cin >>b[j];
	cout <<"Test "<<i<<":"<<endl;
	for (int i=0 ;i<index;i++ ) cout<<a[i]<<" ";
	for (int i=0 ;i<m;i++ ) cout<<b[i]<<" ";
	for (int i=index ;i<n;i++ ) cout<<a[i]<<" ";
	cout <<endl;
}
}
