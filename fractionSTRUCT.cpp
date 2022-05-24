#include <bits/stdc++.h>
using namespace std;
inline long long gcd(long long a,long long b){long long r;while(b){r=a%b;a=b;b=r;}return a;}
struct Fraction{
	long long x,y;
};

void input (Fraction &p)
{
	cin >>p.x>>p.y;
}

void simplify (Fraction &p)
{
	long long ucln= gcd (p.x,p.y);
	p.x /= ucln;
	p.y /=ucln;
}
void print (Fraction p)
{
	cout <<p.x<<"/"<<p.y<<endl;
}
int main() {
	struct Fraction p;
	input(p);
	simplify(p);
	print(p);
	return 0;
}
