#include<bits/stdc++.h>
using namespace std;

int reverse(int num){

    int rev=0,rem=0;
    while(num > 0){
    rem = num%10;
    rev = rev*10+rem;
    num = num/10;
    }
    return rev;
}

int main(){

   int n,m,k;
    cin>>n>>m>>k;
    int cnt = 0;

    for(int i=n; i<=m; i++){

        int beau_day = (abs(i-reverse(i))%k);
        if(beau_day == 0)
            cnt++;
        
    }
    cout<<cnt<<endl;
    return 0;
}