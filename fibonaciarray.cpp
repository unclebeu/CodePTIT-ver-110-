#include <iostream>
using namespace std;
int check(int n){
	int t1 = 0;
    int t2 = 1;
    int c=0;
    while(c<n){
    		c = t1 + t2;
            t1 = t2;
            t2 = c;
            }
    return (c==n);
 }
 
 main (){
 	int t;cin >>t;while (t--){
 		int n; cin >>n;
		int a[n];
		for (int i=0;i<n;i++){
			cin >>a[i];
		}	
		for (int i=0;i<n;i++){
			if (check (a[i])) cout<<""<<a[i]<<" ";
		}
		cout<<endl;
	}
 
 }
