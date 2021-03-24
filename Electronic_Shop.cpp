#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll price,n,m;

    cin>>price>>n>>m;

    vector<ll>key(n,0);
    vector<ll>drv(m,0);

    for(ll i=0; i<n; i++)
        cin>>key[i];

    for(ll j=0; j<m; j++)
        cin>>drv[j];

    ll mx = -1;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){

            ll sum = key[i] + drv[j];
            
            if(sum <= price){

                if(sum >= mx)
                    mx = sum;
            }

        }
    }

    cout<<mx<<endl;
    return 0;
}