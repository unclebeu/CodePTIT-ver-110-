#include<iostream>

using namespace std;
int main()
{
   int d, days, weeks, years;
   cin>>d;
   years = d/365;
   weeks = d/7;
   if (d%7 ==0) days =0;
   else days = d;
	cout<<""<<years<<" "<<weeks<<" "<<days<<endl;
   cout<<endl;
   return 0;
}
