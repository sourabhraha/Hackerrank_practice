#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll st,en;
    cin>>st>>en;

    ll ftree,stree;
    cin>>ftree>>stree;

    ll apples,oranges;
    cin>>apples>>oranges;

    vector<ll>app(apples,0);
    for(int i=0; i<apples; i++)
        cin>>app[i];

    vector<ll>oran(oranges,0);
    for(int i=0; i<oranges; i++)
        cin>>oran[i];

    ll cnt1 = 0, cnt2 = 0;

    for(int i=0; i<apples; i++){

        if(app[i] < 0)
            continue;
        else
        {
            if( ( ftree + app[i] ) >= st && (ftree + app[i] ) <= en )
                cnt1++;
        }
        
    }

     for(int i=0; i<oranges; i++){

        if(oran[i] > 0)
            continue;
        else
        {
            if( ( stree + oran[i])>= st &&  ( stree + oran[i])<=en)
                cnt2++;
        }
        
    }

    cout<<cnt1<<endl<<cnt2<<endl;

    return 0;
}