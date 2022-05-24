#include <bits/stdc++.h>
using namespace std;
main (){
	int n,m;
	cin >>n>>m;
	int a[n],b[m];
	for (int i=0 ;i<n;i++ ) cin >>a[i];
	for (int j=0 ;j<m;j++ ) cin >>b[j];
	int index;
	cin >>index;
	for (int i=0 ;i<index;i++ ) cout<<a[i]<<" ";
	for (int i=0 ;i<m;i++ ) cout<<b[i]<<" ";
	for (int i=index ;i<n;i++ ) cout<<a[i]<<" ";
}
