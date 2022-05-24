#include <iostream>
using namespace std;

int check3 (int n){
	
	return ( n %3 != 0 && n %10 != 3);
}
main (){
	int n;
	cin >> n;
	int dem = 0 ;
	for (int i=1;;i++){
			if (check3 (i) )  dem++;
			if (dem == n ) {
			cout <<""<<i<<endl;
			break;
	}
}
	
	
	
}

