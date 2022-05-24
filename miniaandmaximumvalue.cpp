#include<iostream>


using namespace std;

int dp[102][902][2] ;
void print_ans(int m , int s , int flag){
    if(m==0)
        return ;
    cout<<dp[m][s][flag];
    if(dp[m][s][flag]!=-1)
        print_ans(m-1 , s-dp[m][s][flag] , flag );
    return ;
}
int main(){
 
    int m , s ;
    cin>>m>>s;
  
    for(int i = 0 ; i <=m ; i++){
        for(int j=0 ; j<=s ;j++){
            dp[i][j][0]=-1;
            dp[i][j][1]=-1;
        }
    }
    for(int i = 0 ; i < 10 ; i++){
        dp[1][i][0]=i;
        dp[1][i][1]=i;
    }
    for(int i = 2 ; i<=m ; i++){
        for(int j = 0 ; j<=s ; j++){
            int flag = -1;
            int f = -1;
            for(int k = 0 ; k <= 9 ; k++){
                if(i==m&&k==0)
                    continue;
                if( j>=k && flag==-1 && dp[i-1][j-k][0]!=-1)
                    flag = k;
            }
            for(int k = 9 ; k >=0 ;k--){
                if(i==m&&k==0)
                    continue;
                if( j>=k && f==-1 && dp[i-1][j-k][1]!=-1)
                    f = k;
            }
            dp[i][j][0]=flag;
            dp[i][j][1]=f;
        }
    }
    if(m!=0){
        print_ans(m , s , 0);
        cout<<" ";
        print_ans(m,s,1);
    }
    else
        cout<<"-1 -1";
        cout<<endl;

}
