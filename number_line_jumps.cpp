#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;

    if(x1 == x2)
        cout<<"YES"<<endl;

    else if(x1 > x2){

        if(v1 >= v2)
            cout<<"NO"<<endl;
        else
        {
            ll flag = 0;
            while (x1 > x2)
            {
                x2+=v2;
                x1+=v1;
                if(x1 == x2)
                    flag = 1;
            }
            if(flag == 1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;            
        }
        
    }
    else if( x2 > x1){
        
        if(v2 >= v1)
            cout<<"NO"<<endl;
        else{

             ll flag = 0;
            while (x2 > x1)
            {
                x1+=v1;
                x2+=v2;
                if(x1 == x2)
                    flag = 1;
            }
            if(flag == 1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl; 
        }
    }


    return 0;
}