#include<iostream>
#include <iomanip>
using namespace std;

int main() {
	float a, b;
	char c;
	cin >> a >> c >> b;
	switch (c) {
	case '+':
		cout <<fixed<<setprecision(2) <<a + b;
		break;
	case '-':
		cout <<fixed<<setprecision(2)<< a - b;
		break;
	case '*':
		cout <<fixed<<setprecision(2) <<a * b;
		break;
	case '/':
		cout <<fixed<<setprecision(2) << a / b;
		break;
	}
	return 0;
}
