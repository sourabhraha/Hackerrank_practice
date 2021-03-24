#include<bits/stdc++.h>
using namespace std;
int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int t;
        cin>>t;
        while(t--){
            int n,k,cnt = 0;
            cin>>n>>k;
            vector<int>v(n,0);
            for(int i=0; i<n; i++)
                cin>>v[i];
            
            for(int i=0; i<n; i++){
                if(v[i] > 0)
                    cnt++;
            }
            if((n-cnt) >= k)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;

        }


        return 0;     
}
        