#include <bits/stdc++.h>
#include <string.h>
#include <ctype.h>
using namespace std;
void converse (string s){
	stringstream a(s);
	string w;
	vector <string>words;
	while (a >> w){
		transform (w.begin() , w.end(), w.begin() ,:: tolower);
		words.push_back(w);
		
	}
	string ho;
	int n =words.size();
	for (int i=0;i< n-1 ;i++){
		ho += words[i][0];
	}
	string result =ho+words[n-1] +"@ptit.edu.vn";
	cout<<result;
}
main (){
	string s;
	getline (cin,s);
	converse (s);
}




