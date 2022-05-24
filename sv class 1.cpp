#include <bits/stdc++.h>
using namespace std;
#define a() a
 
class NhanVien{
	private:
		string ma, ten, gt, ns, dc, mst, hd;
	public:
		NhanVien();
		friend ostream& operator << (ostream&, NhanVien);
		friend istream& operator >> (istream&, NhanVien&);
};
 
NhanVien::NhanVien(){
	ma = ten = gt = ns = dc = mst = hd = "";
}
 
ostream& operator << (ostream& out, NhanVien a){
	out << a.ma << " " << a.ten << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.hd << endl;
	return out;
}
 
istream& operator >> (istream& in, NhanVien &a){
	a.ma = "00001";
	getline(in, a.ten);
	cin >> a.gt >> a.ns;
	in.ignore();
	getline(in, a.dc);
	in >> a.mst >> a.hd;
	return in;
}
 
int main(){
    NhanVien a();
    cin >> a;
    cout << a;
    return 0;
}
