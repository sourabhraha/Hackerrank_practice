#include<bits/stdc++.h>
using namespace std;

int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);

      int t;
      cin>>t;
      while (t--)
      {
        int n,height = 0;
        cin>>n;
        for(int i = 0; i<=n; i++){

            if(i==0)
                height = 1;

           else if(i%2==0)
               height+=1;
           else
               height*=2;
        }

        cout<<height<<endl;

      }
      

}