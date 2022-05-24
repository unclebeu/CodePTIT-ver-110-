#include <bits/stdc++.h>
using namespace std;
main (){
string s;
getline (cin,s);
stringstream ss(s);
string tmp;
getline (ss,tmp, '.');
getline (ss,tmp, '.');
if (tmp == "py"|| tmp== "Py"||tmp == "pY"|| tmp == "PY"){
	cout <<"yes";
}
else cout <<"no";
}
