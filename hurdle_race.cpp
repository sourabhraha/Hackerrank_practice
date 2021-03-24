#include<bits/stdc++.h>
using namespace std;
int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int n,k,max = 0;
        cin>>n>>k;
        vector<int>v(n,0);

        for(int i=0; i<n; i++)
            cin>>v[i];
        max = *max_element(v.begin(), v.end());
        if(k>=max)
            cout<<"0"<<endl;
        else
            cout<<max-k<<endl;  
        return0;     
}
        