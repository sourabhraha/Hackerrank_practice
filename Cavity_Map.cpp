#include<bits/stdc++.h>
using namespace std;
int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int x1,x2,v1,v2;
        cin>>x1>>v1>>x2>>v2;
        x1++;x2++;
        if(x1 == x2)
          cout<<"YES"<<endl;
        else{
              //  x1 = min(x1,x2);
                //x2 = max(x1,x2);

                while(x2 >= x1){
                        x1 +=v1;
                        x2+=v2;
                }

                if(x1==x2)
                        cout<<"YES"<<endl;
                else if(x2<x1)
                        cout<<"NO"<<endl;

        }

        return 0;     
}
        