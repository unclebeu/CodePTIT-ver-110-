#include <bits/stdc++.h>
using namespace std;
int check (string s){
	int dem = 1;
	for (int i =0;i< s.length(); i++ ){
		if (s[i] != s[i+1] ){
			dem =1;
		}
		else dem ++;
		if (dem == 7) return 1;
	}

	return 0;
		
}
main (){
	string s;
    cin >> s;
	if (check (s)) cout << "YES";
	else cout <<"NO";
	}


