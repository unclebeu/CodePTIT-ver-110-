#include <bits/stdc++.h>
using namespace std;
struct Examinee {
	string name,birthday;
	double diem1,diem2,diem3;
};

void input(Examinee &a )
{
	getline (cin,a.name);
	cin >> a.birthday;
	cin >> a.diem1>>a.diem2>>a.diem3;
}

void print (Examinee a)
{
	cout << a.name<<" "<<a.birthday<<" "<<fixed<< setprecision(1)
	<<(a.diem1+a.diem2+a.diem3)<<endl;
}


int main(){
    struct Examinee A;
    input(A);
    print(A);
    return 0;
}
