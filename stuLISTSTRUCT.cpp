#include<bits/stdc++.h>
using namespace std;
#define pb push_back
struct Student {

	string ma, ten, lop, ns;
	float gpa;
	void in(){
		cout << ma << " " << ten << " " << lop << " " << ns << " "<< fixed << setprecision(2) << gpa << endl;
	}
};
 
string chuan(string name){
	vector<string> v;
	stringstream ss(name);
	string tmp;
	while(ss >> tmp){
		v.pb(tmp);
	}
	string res = "";
	for(int i = 0; i < v.size(); i++){
		res += (toupper(v[i][0]));
		for(int j = 1; j < v[i].length(); j++){
			res += (tolower(v[i][j]));
		}
		if(i != v.size() - 1) 
			res.append(" ");
	}
	return res;
}
 
void input(Student a[], int N){
	for(int i = 0; i < N; i++){
		cin.ignore();
		getline(cin, a[i].ten);
		a[i].ten = chuan(a[i].ten);
		cin >> a[i].lop >> a[i].ns >> a[i].gpa;
		if(a[i].ns[1] == '/'){
			a[i].ns = "0" + a[i].ns;
		}
		if(a[i].ns[4] == '/'){
			a[i].ns.insert(3, "0");
		}
		string ma = to_string(i + 1);
		while(ma.size() <3) ma = "0" + ma;
		a[i].ma = "B20DCCN" + ma;
	}
}
 
void print(Student a[], int N){
	for(int i = 0; i < N; i++){
		a[i].in();
	}
}
 
int main(){
    struct Student lst[50];
    int N;
    cin >> N;
    input(lst, N);
    print(lst, N);
    return 0;
}

