#include<bits/stdc++.h>
using namespace std;
int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int q;
        cin>>q;
        while(q--){

            int x,y,z;
            cin>>x>>y>>z;
            
           if(abs(x-z) == abs(y-z))
                cout<<"Mouse C"<<endl;
           else if(abs(x-z) > abs(y-z))
                cout<<"Cat B"<<endl;
           else
                cout<<"Cat A"<<endl;
            //  cout<<(abs(p-r) == abs(q-r) ? "Mouse C": ( abs(p-r) < abs(q-r) ? "Cat A" : "Cat B"));
            
        }

    return 0;
}