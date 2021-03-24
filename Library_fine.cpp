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

    ll fine = 0;

   if( (y2 > y1) || y2==y1 && m2>m1 || y2 == y1 && m2 == m1 && d2 >= d1){
       fine = 0;
   }
   else if(y2 == y1 && m2 == m1 && d2 < d1){
       
       fine = 15 * (d1-d2);
   }    
   else if( y2 == y1 && m2 < m1){
       fine = 500 * (m1 - m2);
   }
   else if( y2 < y1){
       fine = 10000;
   }

    cout<<fine<<endl;
    return 0;
}