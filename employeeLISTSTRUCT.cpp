#include <bits/stdc++.h>
using namespace std;
struct Employee{
	string ma;
	string ten,gt,ns,dc,tax,hd;
};

void input (Employee &a)
{	
	while (a.ma.size ()<6){
		a.ma +="0";
	}
	cin.ignore();
	getline (cin,a.ten);
	cin >>a.gt>>a.ns;
	cin.ignore();
	getline (cin,a.dc);
	cin >>a.tax>>a.hd;
	
}

void printlist(Employee a[], int N){
	for(int i = 0; i < N; i++){
		string s = to_string(i + 1);
		while(s.size() < 5) s = "0" + s;
		cout << s << " ";
		cout << a[i].ten << " " << a[i].gt << " " << a[i].ns << " " << a[i].dc << " " << a[i].tax << " " << a[i].hd << endl;
	}
}
int main(){
    struct Employee lst[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) input(lst[i]);
    printlist(lst,N);
    return 0;
}
