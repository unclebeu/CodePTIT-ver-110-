#include <bits/stdc++.h>
using namespace std;
int m,n;


main ()
	{
		int t; cin >>t;while (t--){
			
			cin >>m>>n;
			int a[m][n];
			for (int i=0;i<n;i++){
				for (int j =0;j<n;j++){
					cin >>a [i][j];
				}
			}
			
			int rank =n;
		for (int row =0 ;row <rank;row ++)
			{
				if (a[row][row])
					{
						for (int col =0;col <rank;col ++)
							{
								if (col != row) 
									{
										double t = (double ) a[col][row] / a[row][row];
										for (int i = 0; i < rank; i++)    a[col][i] -= t * a[row][i];
									}
							}
					}
					 else
        				{
            				bool reduce = true;
	 
            				for (int i = row + 1; i < m;  i++)
            					{
                					  if (a[i][row])
                						{
                   							 //swapTwoRows(mat, row, i, rank);
                   							 for (int h=0;h< rank;h++){
												int temp = a[row][h];
												a[row][h] =a[i][h];
												a[i][h] =temp;
											}
                   							 
                   							 
                    							reduce = false;
                    							break ;
                						}
            					}
 
 				           if (reduce)
            				{
               				 rank--;
 	
    			            for (int i = 0; i < m; i ++)
                					    a[i][row] = a[i][rank];
            				}
 								row--;
        }
 
      
    }
			cout <<rank;
			cout <<endl;
			}
		}
	

