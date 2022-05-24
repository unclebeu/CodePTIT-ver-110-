#include<iostream>
#include <cmath>
using namespace std;
long long gcd (long long a,long long b){
	 while (a !=b) {
	 	if (a>b){
	 		a=a-b;
		    }
		else b=b-a;
		}
		return a;
	}
	
long long kq(long long m, long long bcnn)
{
    long long du = m%bcnn;
    long long m1=m;
    if (du == 0) return m;
    m+=bcnn-du;
    if (m <m1*10) return m;
    else return -1;
}




 main(){
	int t;
	cin >> t;
	while (t--){
    long long a , b , c , d ,ml,m ;
    cin >> a >> b >> c>> d;
    ml=1;
    m= gcd(a,b);
    ml= a*b/m;
    m=gcd(ml,c);
    ml=ml*c/m;
    m=1;
    while (--d) m*=10;
        cout <<kq(m,ml)<<endl;
  
 	
    }
}
