#include<iostream>
#include <cmath>

using namespace std;
main(){
   int t;
   cin >>t ;
   while (t--){
   	 double n,r;
   	 cin >> n;
   	 r=0;
   	 for (double i=0;i<=n;i++){
	   r =sqrt (r+i);	
	   }
	cout<<""<<r<<endl;
   }
}
