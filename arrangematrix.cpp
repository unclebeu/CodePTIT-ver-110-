#include <bits/stdc++.h>
using namespace std;


main (){
	int m,n,x; cin >>m>>n>>x;
	x--;
	int a[m][n];
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			cin >> a[i][j];
		}
	}
	for (int i=0;i<m-1;i++){
		for (int j=i+1;j<m;j++){
			if (a[i][x] > a[j][x]){
				swap (a[j][x],a[i][x]);
			}
		}
	}
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++)
			cout <<a[i][j]<<" ";
			cout <<endl;
	}
	
}
