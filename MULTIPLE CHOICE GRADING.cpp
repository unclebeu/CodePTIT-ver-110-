#include <bits/stdc++.h>
using namespace std;
char a101[15]={'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
char a102[15]={'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
main (){
	int t; cin >>t; while (t--){
		long long made;
		cin >> made;
		float diem;
		diem= 0;
		char bailam[15];
		for (int i=0 ;i<15;i++){
			cin >>bailam[i];
		}
		switch (made){
		
			case 101 :
				for( int j = 0; j < 15; j++ ) 
				{ 
  					if( bailam[j] == a101[j] ) diem ++;
				}
		 	cout <<fixed<<setprecision(2)<<(double) ((diem/15)*10 )<<endl;	
				break;
			case 102 :
				for( int i = 0; i < 15; i++ ) 
				{ 
  					if( bailam[i] == a102[i] ) diem ++;
				}
					cout <<fixed<<setprecision(2)<<(double) ((diem/15)*10 )<<endl;	
				break;
			}
	}
}
