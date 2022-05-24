#include <bits/stdc++.h>

using namespace std;

int main (){
	int t; cin >> t; while (t--)
	{
		int m,n,c;
		cin >>m>>n>>c;
		int a[m][n];
		for (int i=0;i<m;i++)
		{
			for (int j=0;j<m;j++){
				cin >>a[i][j];
			}
		}
	
	
	  int i, k = 0, l = 0;
      int count = 0;
 

 
    while (k < m && l < n) {
     
        for (i = l; i < n; ++i) {
            count++;
 
            if (count == c)
                cout << a[k][i] << " ";
        }
        k++;
 
      
        for (i = k; i < m; ++i) {
            count++;
 
            if (count == c)
                cout << a[i][n - 1] << " ";
        }
        n--;
 
 
        if (k < m) {
            for (i = n - 1; i >= l; --i) {
                count++;
 
                if (count == c)
                    cout << a[m - 1][i] << " ";
            }
            m--;
        }
 
      
        if (l < n) {
            for (i = m - 1; i >= k; --i) {
                count++;
 
                if (count == c)
                    cout << a[i][l] << " ";
            }
            l++;
        }
    }
	
    }
	}


