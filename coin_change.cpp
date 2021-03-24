#include<bits/stdc++.h>
using namespace std;

int dp[251][52];

int coin_change(int arr[], int n, int m){

    for(int i=0; i<=n; i++){
        for(int j=0; j<=m; j++){
            if(i==0)
                dp[i][j] = 0;
            if(j==0)
                dp[i][j] = 1;
        }
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            
            if(arr[i-1]<=j){
                dp[i][j] = dp[i][j-arr[i-1]] + dp[i-1][j];
            }
            else
            {
                dp[i][j] = dp[i-1][j];
            }
            
        }
    }

    return dp[n][m];

}

int main(){

    int m,n;
    cin>>m>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    cout<<coin_change(arr,n,m)<<endl;


    return 0;
}