#include <bits/stdc++.h>
using namespace std;
struct Employee{
	string ma = "00001";
	string ten, gt, ns, dc, mst, hd;
};
 
 
void input(Employee &a){
	getline(cin, a.ten);
	cin >> a.gt >> a.ns;
	cin.ignore();
	getline(cin, a.dc);
	cin >> a.mst >> a.hd;
}
 
void print(Employee a){
	cout << a.ma << " " << a.ten << " " << a.gt << " " <<a.ns << " " << a.dc << " " << a.mst << " " << a.hd << endl;
}

int main(){
    struct Employee a;
    input(a);
    print(a);
    return 0;
}
