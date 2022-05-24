#include <bits/stdc++.h>
using namespace std;
struct SinhVien {
	string masv;
	string ten;
	string lop,date;
	float gpa;
};

void nhapThongTinSV (SinhVien &a)
{
	getline (cin,a.ten);
	cin >> a.lop>>a.date>>a.gpa;
	a.masv ="N20DCCN001";
	string temp="";
	if (a.date[1] == '/')
	{
		a.date ="0"+a.date;
		
	}
	if (a.date[4] == '/')
	{
		a.date.insert(3, "0");
	}
}


void inThongTinSV (SinhVien a)
{
	cout << a.masv << " " << a.ten << " " << a.lop << " " << a.date << " " << fixed << setprecision(2) << a.gpa << endl;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
