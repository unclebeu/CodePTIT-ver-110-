#include <bits/stdc++.h>
using namespace std;
/*struct sv {
	
	string id;
	string name;
	string lop;
	double diem1,diem2,diem3;
};

void input (sv &a)
{

		cin >> a.id;
		while(getchar()!= '\n' );
		getline (cin , a.name);
		cin >>a.lop;
		cin>>a.diem1>>a.diem2>>a.diem3;
}


void in (sv a[],int n)
{
	for (int i=0;i<n;i++)	
	{
		cout <<i+1<<" ";
		cout <<a[i].id<<" "<<a[i].name<<" "<<a[i].lop<<" "
		<<fixed<<setprecision(1)<<a[i].diem1<<" "<<fixed<<setprecision(1)<<a[i].diem2<<" "<<fixed<<setprecision(1)<<a[i].diem3<<endl;
	}
}

int main(){
	int n,i;
    struct sv lst[n];
	cin >> n;
    for(i = 0; i < n; i++) input(lst[i]);
	auto cmp = [](const sv &a, const sv &b){ return a.name  < b.name;};
	sort(lst, lst + n, cmp);
    in(lst,n);
    return 0;
}
*/
struct sv{
	string ma, ten, lop;
	float a, b, c;
};
 
 
int main(){
	int n; cin >> n;
	sv a[n];
	for(int i = 0;i < n; i++){
		cin >> a[i].ma;
		while (getchar ()!= '\n')
		getline(cin, a[i].ten);
		cin >> a[i].lop;
		cin >> a[i].a >> a[i].b >> a[i].c;
	}
	auto cmp = [](sv &a, sv &b){ return a.ten < b.ten;};
	sort(a, a + n, cmp);
	for(int i = 0; i < n; i++){
		cout << i + 1 << " " << a[i].ma << " " << a[i].ten << " " << a[i].lop << " " << fixed << setprecision(1) << a[i].a << " " << a[i].b << " " << a[i].c << endl;
	}
}
