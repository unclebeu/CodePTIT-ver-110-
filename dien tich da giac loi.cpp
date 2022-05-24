#include <bits/stdc++.h>

using namespace std;
struct point{
	double x,y;
};

void xuli (point a, point b,point c)
{	
	double canh1= sqrt( (a.x-b.x)* (a.x-b.x) + (a.y-b.y)*(a.y-b.y)   );
	double canh2= sqrt( (c.x-b.x)* (c.x-b.x) + (c.y-b.y)*(c.y-b.y)   );
	double canh3= sqrt( (a.x-c.x)* (a.x-c.x) + (a.y-c.y)*(a.y-c.y)   );
	/*if (canh1 + canh2 <= canh3 || canh2+ canh3 <= canh1 || canh1 +canh3 <= canh2|| canh3 == 0|| canh2==0||canh1==0)
	{
		cout <<"INVALID\n";return ;
	}
	*/
	double t1=canh1+canh2+canh3;
	double t2=canh1+canh2-canh3;
	double t3=canh2+canh3-canh1;
	double t4=canh1+canh3-canh2;
	double s= 0.25* (sqrt(t1*t2*t3*t4)) ;
	
	cout <<fixed <<setprecision(3)<<s<<endl;
}
 
int main(){
	int t;cin >>t;while (t--)
	{
		point a,b,c;
		cin >>a.x>>a.y>>b.x>>b.y>>c.x>>c.y;
		xuli(a,b,c);
	}
}
