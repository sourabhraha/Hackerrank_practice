#include<bits/stdc++.h>
using namespace std;

int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);

      int t;
      cin>>t;
      while (t--)
      {
          int count = 0;
          string num;
          cin>>num;
          for(int i=0; i<num.size(); i++){
          int  int_num = num[i] - '0'; 
              if(int_num==0)
                continue;
             else if(stoi(num)%int_num == 0)
                count++;
          }
          cout<<count<<endl;
      }
      
      return 0;

}