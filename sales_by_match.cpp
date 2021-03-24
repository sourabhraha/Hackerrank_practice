#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    vector<int>v(101,0);

    for(int i=0; i<n; i++)
        {
            int num;
            cin>>num;
            v[num]++;
        }

    ll ans = 0;

    for(int i=0; i<v.size(); i++){

        if(v[i]== 0 || v[i] == 1)
            continue;
        else
         ans+=v[i]/2;
    }

    cout<<ans<<endl;


    return 0;
}