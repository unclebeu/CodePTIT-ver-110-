#include <bits/stdc++.h>
using namespace std;

void printkq (int a[][100], int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
                cout << a[i][j] << " ";
            else
                cout << " "
                     << " ";
        }
        cout << "\n";
    }
}
main (){
	int t;cin >>t;while (t--){
		int n;
		cin >>n;
		int a[n][100];
		for (int i=0;i<n;i++){
			for (int j =0;j<n;j++){
				cin >> a[i][j];
			}
		}
		printkq (a,n);
		}
	}

