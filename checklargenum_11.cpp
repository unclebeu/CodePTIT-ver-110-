#include <iostream>
using namespace std;
void check (string s){
	int n =s.length ();
	int so=0,se=0;
	for (int i=0;i< n;i++){
		if (i%2 == 1) so=so+(s[i]-'0');
		else 		  se=se+(s[i]-'0');
		
	}
	long long su=so-se;
	if (su % 11 ==0) cout <<"1"<<endl;
	else cout<<"0"<<endl;
}

int main (){
	int t;cin>>t;
	cin.ignore();
	while (t--){
		string s;
		getline (cin,s);
		check (s);
		
		
	}
}
