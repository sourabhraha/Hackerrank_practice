#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<char,ll>mp;

    for(ll i=97; i<=122; i++){
        ll num;
        cin>>num;
        mp.insert(make_pair(i,num));
    }

    string str;
    cin>>str;

    ll mx = 0;
    for(ll i=0; i<str.length(); i++){

        ll check = mp[str[i]];
        if(check >= mx)
            mx = check;
    }

    cout<<mx*str.length()<<endl;

    return 0;
}