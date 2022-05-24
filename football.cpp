#include<iostream>
using namespace std;
int main(){
    int n,i,a[100] ={0},re =0,check =0;
    cin >> n;
    a[0]=0;
    for (int i=1;i<=n;i++){
        cin >>a [i];
        if (check ==0 ){
            if (a[i] - a[i-1] >15 ){
                re=a[i-1] +15;
                check=1;
            }
        }
    }
    if (check ) cout <<""<<re<<endl;
    else if (a[n]<75) cout <<""<<a[n]+15<<endl;
    else cout<<"90"<<endl;
}
