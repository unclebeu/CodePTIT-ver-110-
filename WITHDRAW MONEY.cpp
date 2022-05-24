#include <bits/stdc++.h>
using namespace std;

int coins[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int n = sizeof(coins) / sizeof(coins[0]);
  
void findMin(int V)
{
     sort(coins, coins + n);
  	 vector<int> ans;
	 for (int i = n - 1; i >= 0; i--) {
  	 while (V >= coins[i]) {
            V -= coins[i];
            ans.push_back(coins[i]);
        }
    }
  	int count =0;
    for (int i = 0; i < ans.size(); i++){
	
        if (ans [i]) count++;
	}
	cout <<count<<endl;
}

main (){
	int t;cin >>t;while (t--)
	{
		int n; cin >>n;
		findMin (n);
	}
}
