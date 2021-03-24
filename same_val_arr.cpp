#include<bits/stdc++.h>
using namespace std;
int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

    int n;
    cin>>n;
    vector<int>v(101,0);
    int max = 0,val;
    for(int i=0; i<n; i++){
        cin>>val;
        v[val]++;
    }
    cout<<n-*max_element(v.begin(),v.end())<<endl;
}
        