#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll d1,m1,y1;
    ll d2,m2,y2;

    cin>>d1>>m1>>y1;
    cin>>d2>>m2>>y2;

    ll ygap = abs(y2-y1);
    ll mgap = abs(m2-m1);
    ll dgap = abs(d2-d1);

    ll fine = 0;

    if(dgap == 0 && mgap == 0 && ygap == 0)
        {
            fine = 0;
        }

    else if(dgap!=0 && mgap == 0 && ygap == 0)
    {
        fine = 15 * (dgap);
    }

    else if(mgap!=0 && ygap == 0){
        fine = 500 * (ygap);
    }

    else if(ygap > 0)
        {
            fine = 10000;
        }



    cout<<fine<<endl;
    return 0;
}