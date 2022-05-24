#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
 
class PhanSo{
	private:
		ll tu, mau;
	public:
		PhanSo(){
 
		}
		PhanSo(int tu, int mau){
			this->tu = tu;
			this->mau = mau;
		}
 
		friend PhanSo operator + (PhanSo &a,PhanSo &b){
			ll mc= lcm(a.mau,b.mau);
			PhanSo tong;
			tong.tu= mc/a.mau*a.tu +mc/b.mau*b.tu;
			tong.mau=mc;
			ll g =gcd (tong.tu,tong.mau);
			tong.tu/=g;
			tong.mau/=g;
			return tong;
		
		}
		friend ostream& operator << (ostream& out,const PhanSo a){
			out << a.tu << "/" << a.mau << endl;
			return out;
		}
		friend istream& operator >> (istream& in, PhanSo& a){
			in >> a.tu >> a.mau;
			return in;
		}
};
 
 
int main() {
	PhanSo a,b;
	cin >> a>>b;
	
	cout << a+b;
	return 0;
}
