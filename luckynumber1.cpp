#include <iostream>
using namespace std;
long long ssum(long long n)
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
    int t; cin >>t;while (t--){
    long long n;
    cin >>n;
    if (ssum(n) %9 ==0) cout <<"1"<<endl;
    else cout <<"0"<<endl;
    
}