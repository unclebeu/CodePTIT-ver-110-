#include <iostream>
#include <string>
using namespace std;
long long sum1(string s){
	long long su=0;
	for (int i= 0; s[i] != '\0'; i++)
    {
        if ((s[i] >= '0') && (s[i] <= '9')) 
        {
            su += (s[i] - '0'); 
        }
    }
    return su;
}
long long sum2(long long n)
{
    int sum = 0;
    while(n > 0 || sum > 9)
    {
        if(n == 0)
        {
            n = sum;
            sum = 0;
        }
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

main()
{
    int t; cin >>t;
	cin.ignore();
	while (t--){
    string s;
    getline (cin,s);
    int tong=sum1(s);
    if (sum2(tong)  == 9) cout <<"1"<<endl;
    else cout <<"0"<<endl;
}
}
