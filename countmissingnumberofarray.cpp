#include <iostream>
using namespace std;

main(){
	int t ; cin >>t;while (t--){
		int n;
		cin >>n;
		int a[1001];
		cin >>a[0];
		int max=a[0],min=a[0],count=0;
		for (int i=1;i<n;i++){
			cin >> a[i];
			if (a[i] >max) max=a[i];
			if (a[i]<min) min=a[i];
		}
		for (int j=0;j<n;j++){
			int kq =1;
			for (int g =j+1;g<n;g++){
				if ( a[j] == a[g]) kq=0;
			}
			if(kq) count ++;
		}
		
		cout <<max -min +1 -count <<endl;
		
	}
}
