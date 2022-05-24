#include <bits/stdc++.h>
using namespace std;
class point{
	private :
		int x,y;
	public:
		Diem(){
		}
		Diem(int x,int y)
		{
			this->x =x;
			this->y =y;
		}
		void xuli(point a,point b)
		{
			double kq= sqrt( (a.x-b.x)*(a.x-b.x) +(a.y-b.y)*(a.y-b.y));
			cout <<fixed<<setprecision(5)<<kq<<endl;
		}
		void in(point &a)
		{
			cin>>a.x>>a.y;
		}
};
int main()
{
	int t;cin>>t;while (t--)
	{
		point a,b;
		a.in;
		b.in;
		xuli(a,b);
	}
}
