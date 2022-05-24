#include <bits/stdc++.h>
using namespace std;
main (){
	int t;
	cin >>t;cin.ignore ();while (t--){
		
		string s;
		getline (cin,s);
		int a[256] = {0};
		for (int i=0;i<=s.length (); i++){
			if (s[i] != '0') a[s[i]]++;
		}
			for (int i=0;i<= s.length (); i++){
				if (a[s[i]] == 1 ) cout << s[i];
	}
	cout <<endl;
}
}
